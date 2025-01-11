#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Class definition for Account
class Account {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor to initialize an account
    Account(string accNum, string name, double initialBalance)
        : accountNumber(accNum), accountHolderName(name), balance(initialBalance) {}

    // Methods for account operations
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: " << balance << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }

    // Save account data to a file
    void saveToFile() {
        ofstream outFile(accountNumber + ".txt");
        outFile << accountNumber << endl
                << accountHolderName << endl
                << balance << endl;
        outFile.close();
    }

    // Load account data from a file
    static Account loadFromFile(string accNum) {
        ifstream inFile(accNum + ".txt");
        string name;
        double balance;
        if (inFile) {
            getline(inFile, accNum);
            getline(inFile, name);
            inFile >> balance;
            inFile.close();
            return Account(accNum, name, balance);
        } else {
            throw runtime_error("Account not found!");
        }
    }
};

// Function to display the menu
void displayMenu() {
    cout << "\n--- Bank Account Management System ---\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Display Balance\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

// Main function
int main() {
    Account *account = nullptr;
    string accNum, name;
    double initialBalance, amount;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Account Number: ";
            cin >> accNum;
            cin.ignore();
            cout << "Enter Account Holder Name: ";
            getline(cin, name);
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;
            account = new Account(accNum, name, initialBalance);
            account->saveToFile();
            cout << "Account created successfully!" << endl;
            break;

        case 2:
            if (account) {
                cout << "Enter deposit amount: ";
                cin >> amount;
                account->deposit(amount);
                account->saveToFile();
            } else {
                cout << "No account found! Please create an account first." << endl;
            }
            break;

        case 3:
            if (account) {
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account->withdraw(amount);
                account->saveToFile();
            } else {
                cout << "No account found! Please create an account first." << endl;
            }
            break;

        case 4:
            if (account) {
                account->displayBalance();
            } else {
                cout << "No account found! Please create an account first." << endl;
            }
            break;

        case 5:
            cout << "Thank you for using the system!" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    delete account;
    return 0;
}