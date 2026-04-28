#include <stdio.h>
#include <string.h>

#define MAX_FLIGHTS 10

struct Flight {
    char flightNo[10];
    char origin[20];
    char destination[20];
    int capacity;
    int availableSeats;
    float price;
};

// Function to save flights to a file
void saveFlightsToFile(struct Flight *flights, int numFlights) {
    FILE *file = fopen("flights.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for saving.\n");
        return;
    }

    for (int i = 0; i < numFlights; i++) {
        fprintf(file, "%s %s %s %d %d %.2f\n",
                flights[i].flightNo, flights[i].origin, flights[i].destination,
                flights[i].capacity, flights[i].availableSeats, flights[i].price);
    }

    fclose(file);
    printf("Flights saved successfully.\n");
}

// Function to load flights from a file
int loadFlightsFromFile(struct Flight *flights) {
    FILE *file = fopen("flights.txt", "r");
    if (file == NULL) {
        printf("No saved flights found.\n");
        return 0;
    }

    int numFlights = 0;
    while (fscanf(file, "%s %s %s %d %d %f",
                  flights[numFlights].flightNo, flights[numFlights].origin,
                  flights[numFlights].destination, &flights[numFlights].capacity,
                  &flights[numFlights].availableSeats, &flights[numFlights].price) == 6) {
        numFlights++;
    }

    fclose(file);
    printf("Flights loaded successfully.\n");
    return numFlights;
}

// Function to add a flight
void addFlight(struct Flight *flights, int *numFlights) {
    if (*numFlights >= MAX_FLIGHTS) {
        printf("Cannot add more flights.\n");
        return;
    }

    printf("Enter flight number: ");
    scanf("%s", flights[*numFlights].flightNo);
    printf("Enter origin: ");
    scanf("%s", flights[*numFlights].origin);
    printf("Enter destination: ");
    scanf("%s", flights[*numFlights].destination);
    printf("Enter capacity: ");
    scanf("%d", &flights[*numFlights].capacity);
    flights[*numFlights].availableSeats = flights[*numFlights].capacity;
    printf("Enter price: ");
    scanf("%f", &flights[*numFlights].price);

    (*numFlights)++;
    printf("Flight added successfully.\n");
}

// Function to view all flights
void viewFlights(struct Flight *flights, int numFlights) {
    if (numFlights == 0) {
        printf("No flights available.\n");
        return;
    }

    printf("\nAvailable Flights:\n");
    for (int i = 0; i < numFlights; i++) {
        printf("Flight No: %s, Origin: %s, Destination: %s, Available Seats: %d, Price: %.2f\n",
               flights[i].flightNo, flights[i].origin, flights[i].destination,
               flights[i].availableSeats, flights[i].price);
    }
}

// Function to book a flight
void bookFlight(struct Flight *flights, int numFlights) {
    char flightNo[10];
    int seats;

    printf("Enter flight number: ");
    scanf("%s", flightNo);

    for (int i = 0; i < numFlights; i++) {
        if (strcmp(flights[i].flightNo, flightNo) == 0) {
            printf("Enter number of seats to book: ");
            scanf("%d", &seats);

            if (seats > flights[i].availableSeats) {
                printf("Not enough seats available.\n");
            } else {
                flights[i].availableSeats -= seats;
                printf("Booking successful!\n");
            }
            return;
        }
    }

    printf("Flight not found.\n");
}

int main() {
    struct Flight flights[MAX_FLIGHTS];
    int numFlights = loadFlightsFromFile(flights);
    int choice;

    do {
        printf("\nAirline Reservation System\n");
        printf("1. Add Flight\n");
        printf("2. View Flights\n");
        printf("3. Book Flight\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addFlight(flights, &numFlights);
                saveFlightsToFile(flights, numFlights);
                break;
            case 2:
                viewFlights(flights, numFlights);
                break;
            case 3:
                bookFlight(flights, numFlights);
                saveFlightsToFile(flights, numFlights);
                break;
            case 4:
                printf("Exiting...\n");
                saveFlightsToFile(flights, numFlights);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

