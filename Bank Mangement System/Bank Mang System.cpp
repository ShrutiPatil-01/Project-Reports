#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

struct Account {
    string name;
    string birthdate;
    string mobileNumber;
    string city;
    long long int accountNumber;
    double balance;
};

// Function to generate a random 11-digit account number
long long int generateAccountNumber() {
    return rand() % 9000000000 + 1000000000;
}

// Function to create a new account
void createNewAccount(vector<Account>& accounts) {
    string name, birthdate, mobileNumber, city;

    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your birthdate (dd/mm/yyyy): ";
    getline(cin, birthdate);
    cout << "Enter your mobile number: ";
    getline(cin, mobileNumber);
    cout << "Enter your city: ";
    getline(cin, city);

    // Generate a new account number
    long long int accountNumber = generateAccountNumber();

    // Create a new account object and add it to the vector
    Account newAccount;
    newAccount.name = name;
    newAccount.birthdate = birthdate;
    newAccount.mobileNumber = mobileNumber;
    newAccount.city = city;
    newAccount.accountNumber = accountNumber;
    newAccount.balance = 0.0;

    accounts.push_back(newAccount);

    cout << "Account created successfully. Your account number is: " << accountNumber << endl;
}

// Function to delete an account
void deleteAccount(vector<Account>& accounts) {
    long long int accountNumber;
    string birthdate;

    cout << "Enter your birthdate (dd/mm/yyyy): ";
    cin.ignore();
    getline(cin, birthdate);
    cout << "Enter your account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber && accounts[i].birthdate == birthdate) {
            accounts.erase(accounts.begin() + i);
            cout << "Account deleted successfully." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No account found in this bank." << endl;
    }
}

// Function to deposit amount
void depositAmount(vector<Account>& accounts) {
    long long int accountNumber;
    double amount;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber) {
            cout << "Enter the amount to deposit: ";
            cin >> amount;

            accounts[i].balance += amount;
            cout << "Amount deposited successfully." << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No account found in this bank." << endl;
    }
}

// Function to check account balance
void checkBalance(vector<Account>& accounts) {
    long long int accountNumber;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber) {
            cout << "Your account balance: " << accounts[i].balance << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No account found in this bank." << endl;
    }
}

// Function to withdraw amount
void withdrawAmount(vector<Account>& accounts) {
    long long int accountNumber;
    double amount;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber) {
            cout << "Enter the amount to withdraw: ";
            cin >> amount;

            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                cout << "Amount withdrawn successfully." << endl;
            } else {
                cout << "Not enough amount in your account." << endl;
            }

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No account found in this bank." << endl;
    }
}

// Function to display account details
void displayAccountDetails(vector<Account>& accounts) {
    long long int accountNumber;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber) {
            cout << "Name: " << accounts[i].name << endl;
            cout << "Birthdate: " << accounts[i].birthdate << endl;
            cout << "Mobile Number: " << accounts[i].mobileNumber << endl;
            cout << "City: " << accounts[i].city << endl;
            cout << "Account Number: " << accounts[i].accountNumber << endl;
            cout << "Balance: " << accounts[i].balance << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found in this bank." << endl;
    }
}

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\nBanking System Menu:" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Delete Account" << endl;
        cout << "3. Deposit Amount" << endl;
        cout << "4. Balance Enquiry" << endl;
        cout << "5. Withdraw Amount" << endl;
        cout << "6. My Account Details" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1:
                createNewAccount(accounts);
                break;
            case 2:
                deleteAccount(accounts);
                break;
            case 3:
                depositAmount(accounts);
                break;
            case 4:
                checkBalance(accounts);
                break;
            case 5:
                withdrawAmount(accounts);
                break;
            case 6:
                displayAccountDetails(accounts);
                break;
            case 7:
                cout << "Thank you for using the banking system. Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}

