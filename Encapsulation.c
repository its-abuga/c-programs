/*
AUTHOR--AGNES ABUGA
DATE-FEB 16 2025
REG NO--BSE-05-0197/2024
CONTEXT-ENCAPSULATION
*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        this->accountHolder = holder;
        this->balance = (initialBalance >= 0) ? initialBalance : 0; // Ensure valid balance
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for accountHolder
    void setAccountHolder(string holder) {
        this->accountHolder = holder;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance (with validation)
    void setBalance(double amount) {
        if (amount >= 0) {
            this->balance = amount;
        } else {
            cout << "Error: Balance cannot be negative!" << endl;
        }
    }
};

// Main function to test the class
int main() {
    // Creating a BankAccount object
    BankAccount account("John Doe", 500.0);

    // Display initial details
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: $" << account.getBalance() << endl;

    // Trying to set an invalid balance
    account.setBalance(-100.0); // Should show an error

    // Display updated balance
    cout << "Updated Balance: $" << account.getBalance() << endl;

    return 0;
}
