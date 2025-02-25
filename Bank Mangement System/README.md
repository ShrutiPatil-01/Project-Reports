# Banking System in C++

## Description
The Banking System is a console-based application designed to simulate basic banking operations. It allows users to perform various tasks such as creating accounts, depositing and withdrawing money, checking balances, and managing account details. This project is developed in C++ and showcases the use of structures, vectors, and user input handling.

## Features
- **Create New Account**: Register a new account with unique details and a randomly generated 11-digit account number.
- **Delete Account**: Remove an account from the system using account number and birthdate for authentication.
- **Deposit Amount**: Add money to an existing account.
- **Withdraw Amount**: Withdraw money from an account, ensuring sufficient balance.
- **Check Balance**: View the current balance of an account.
- **Account Details**: Display all details of a specific account.

## Technology Stack
- **Programming Language**: C++
- **Concepts Used**: Structures, Vectors, Random Number Generation, Input Handling

## How to Run
1. Clone the repository to your local machine.
2. Open the source file in a C++ development environment (e.g., Code::Blocks, Visual Studio, or g++).
3. Compile and run the program.
4. Use the menu options to interact with the banking system.

## Menu Options
1. **Create New Account**: Enter personal details like name, birthdate, mobile number, and city to create a new account.
2. **Delete Account**: Authenticate using the account number and birthdate to delete an account.
3. **Deposit Amount**: Enter your account number and the amount to deposit into your account.
4. **Balance Enquiry**: View the current balance by providing your account number.
5. **Withdraw Amount**: Enter your account number and the amount to withdraw.
6. **My Account Details**: View all details of a specific account.
7. **Exit**: Close the application.

## Example Usage
```plaintext
Banking System Menu:
1. Create New Account
2. Delete Account
3. Deposit Amount
4. Balance Enquiry
5. Withdraw Amount
6. My Account Details
7. Exit
Enter your choice (1-7): 1

Enter your name: John Doe
Enter your birthdate (dd/mm/yyyy): 01/01/1980
Enter your mobile number: 9876543210
Enter your city: New York
Account created successfully. Your account number is: 12345678901
