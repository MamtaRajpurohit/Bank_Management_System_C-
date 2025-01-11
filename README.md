# Bank_Management_System_C++
A beginner-friendly bank management system built in C++

# **Bank Management System**

## **Overview**
The **Bank Management System** is a console-based application built in C++ that allows users to manage bank accounts. This project simulates basic banking operations like account creation, deposit, withdrawal, and data persistence. It is designed to demonstrate object-oriented programming (OOP) principles, file handling, and modular code design.

---

## **Features**
- **Create a New Account**: Users can create an account by providing an account number, holder's name, and an initial balance.
- **Deposit Money**: Allows users to deposit a specified amount into their account.
- **Withdraw Money**: Enables users to withdraw money from their account, ensuring sufficient balance.
- **Check Account Details**: Retrieve and display account information.
- **Data Persistence**: Stores account data in external files, enabling the retrieval of data after the program is closed.
- **Error Handling**: Includes basic error handling for invalid operations (e.g., insufficient funds, account not found).

---

## **Technologies Used**
- Programming Language: **C++**
- Concepts: 
  - Object-Oriented Programming (OOP)
  - File Handling
  - Static Methods
  - Pointers
- Tools: 
  - **Visual Studio Code** as the code editor
  - **g++ (GCC)** for compiling the project
  - **gdb** for debugging

---

## **Installation and Setup**
Follow these steps to set up and run the project on your local machine:

1. **Clone the Repository**:
   ```bash
   git clone <repository-url>
   cd <repository-folder>
   ```

2. **Compile the Code**:
   Use the `g++` compiler to compile the code:
   ```bash
   g++ -g -o build/Debug/outDebug main.cpp
   ```

3. **Run the Program**:
   Execute the compiled file:
   ```bash
   ./build/Debug/outDebug
   ```

---

## **Usage**
1. Run the program and follow the on-screen prompts.
2. Enter your desired operation:
   - Create an account by entering account details.
   - Deposit or withdraw funds.
   - View account details.
3. The account data is saved in a text file named `<AccountNumber>.txt` for persistence.

---

## **Folder Structure**
```plaintext
project-folder/
│
├── build/
│   └── Debug/
│       └── outDebug    # Compiled executable file
│
├── main.cpp            # Main source code file
├── README.md           # Project documentation
├── <AccountNumber>.txt # Account data files (generated dynamically)
```

---

## **Example**
Sample account data stored in the file (`12345.txt`):
```plaintext
12345
John Doe
5000
```

---

## **Future Enhancements**
- Implement a graphical user interface (GUI) for better usability.
- Add transaction history tracking.
- Introduce login and authentication for enhanced security.
- Implement database support for larger-scale operations.

---

## **Contributors**
- **Divya** - Developer

---

## **License**
This project is licensed under the MIT License. Feel free to use, modify, and distribute it.