## 👩‍💻 Author
**Zunaira Ahmed**  
*Computer Science Student*

# ✈️ Online Airline Reservation System (C Project)
![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Status](https://img.shields.io/badge/Project-Completed-success?style=for-the-badge)
![Console](https://img.shields.io/badge/Type-Console%20Application-black?style=for-the-badge)
![File Handling](https://img.shields.io/badge/Concept-File%20Handling-orange?style=for-the-badge)
![Structures](https://img.shields.io/badge/Data%20Structure-Structs-yellow?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge)

## 📌 Introduction
The **Online Airline Reservation System** is a simple C-based application designed to streamline the process of booking airline tickets. It helps improve customer experience by enabling efficient reservation handling and reducing manual effort.

The system allows users to:
- View available flights  
- Check seat availability  
- Make reservations  
- Handle basic booking errors  

---

## 🎯 Goals
The project aims to:

- Reduce the time and effort required for making reservations  
- Automate manual booking processes  
- Standardize reservation handling  
- Ensure basic data security through structured input handling  

---

## 🛠️ Technologies Used
- **Programming Language:** C  
- **Concepts:** File Handling, Structures, Basic Input/Output Operations  

---

## 💻 System Requirements

### Hardware Requirements
- Processor: Any modern processor (e.g., Intel i3 or equivalent)  
- Memory: Minimum 1 GB RAM  
- Storage: At least 100 MB free disk space  

### Software Requirements
- Operating System: Windows / Linux / macOS  
- Compiler: GCC (GNU Compiler Collection) or any standard C compiler  
- Text Editor: Visual Studio Code, Notepad++, or any preferred editor  

---

## ⚙️ Methodology
The system follows a **menu-driven approach**, allowing users to interact via numeric input.

### Key Features
- **Display Flights:** Shows available flights along with seat availability  
- **Make Reservations:** Allows users to book seats if available  
- **Error Handling:** Prevents overbooking and invalid flight selection  

---

## 🧩 System Design

### Data Structure
The system uses an **array of structures**, where each structure represents a flight with:
- Flight Number (unique identifier)  
- Seats Available  

### Core Operations
- **Display Flights:** Lists all flights with available seats  
- **Book Reservation:** Books seats for a selected flight  
- **Input Validation:** Ensures valid flight numbers and seat limits  

---

## 🚀 Implementation

### Functions Used

- **`displayFlights()`**  
  Displays all flights and their available seats  

- **`makeReservation()`**  
  Handles booking logic and checks seat availability  

- **`main()`**  
  Provides the menu-driven interface for user interaction  

---

## 🛠️ DEVELOPMENT ENVIRONMENT:

➡️ **IDE:** Eclipse IDE for Java Developers (Version: latest stable release)

➡️ **Programming Language:** Java SE 8+

➡️ **Database:** Oracle Database XE (Express Edition)

➡️ **Database Connectivity:** Oracle JDBC Driver (ojdbc8.jar)

➡️ **UI Toolkit:** Java Swing for building the graphical user interface

---

## 📁 PROJECT SETUP IN ECLIPSE:

➡️ Created a new **Java Project** named `FlightReservationSystem`.

➡️ Added the Oracle JDBC driver JAR (ojdbc8.jar) to the project build path to enable database connectivity.

➡️ Organized the project into packages:

- **model** — Java classes representing database entities (User, Flight, Reservation)
- **db** — Database connection and utility classes
- **view** — Swing GUI components for login and main application windows
- **controller** — Business logic and event handling classes

---

## 🔑 KEY IMPLEMENTATION DETAILS:

### 🔗 DATABASE CONNECTION:

- Implemented a reusable `DBConnection` class using JDBC to connect to Oracle database.
- Connection parameters (URL, username, password) are configured securely.
- Used `PreparedStatement` for executing SQL queries to prevent SQL injection.

### 👤 USER AUTHENTICATION:

- Developed a login window using Swing components (`JFrame`, `JTextField`, `JPasswordField`, `JButton`).
- On login button click, the system validates user credentials by querying the database.
- Passwords are hashed using SHA-256 before comparison for enhanced security.
- Successful login opens the main application window; unsuccessful attempts show error dialogs.

### 🖥️ MAIN APPLICATION INTERFACE:

- Designed a clean and intuitive UI with Java Swing:
  - Flight search panel with dropdowns and date pickers.
  - `JTable` to display search results dynamically.
  - Booking form to capture seat selection and confirm reservations.
- Implemented event listeners to handle user actions like searching flights and booking seats.

### ⚠️ ERROR HANDLING AND VALIDATION:

- Added input validation to ensure fields are not empty and data formats are correct.
- Used try-catch blocks to handle SQL exceptions and display user-friendly error messages.
- Ensured the application does not crash on invalid inputs or database errors.

### 🧪 TESTING AND DEBUGGING:

- Used Eclipse's debugging tools to step through code and verify logic correctness.
- Tested database connectivity and query execution thoroughly.
- Verified UI responsiveness and correctness of displayed data.
- Performed multiple login attempts with valid and invalid credentials to ensure security.

---

## 📈 Conclusion
This project demonstrates a basic yet effective airline reservation system using C. It successfully allows users to:

- View available flights  
- Book seats with validation checks  
- Handle common errors (invalid input, insufficient seats)  

---

## 🔮 Future Enhancements
Potential improvements include:

- Adding user authentication (login system)  
- Developing a graphical user interface (GUI)  
- Integrating a database for persistent data storage  
- Implementing online payment functionality  

