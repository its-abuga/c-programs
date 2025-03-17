/*
AUTHOR--AGNES ABUGA
DATE-MARCH 16 2025
REG NO--BSE-05-0197/2024
CONTEXT-BANKING SYSTEM
*/

#include <iostream>
#include <string>

using namespace std;

// Define Customer structure
struct Customer {
    string name;
    double accountBalance;
    string lastTransaction;
};

// Function to display customer details
void displayCustomer(const Customer& c) {
    cout << "\nCustomer Details:\n";
    cout << "Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
    cout << "---------------------------\n";
}

int main() {
    // Creating two customer records
    Customer c1, c2;

    // Taking user input for first customer
    cout << "Enter details for Customer 1:\n";
    cout << "Name: ";
    getline(cin, c1.name);
    cout << "Account Balance: ";
    cin >> c1.accountBalance;
    cin.ignore(); // Clear input buffer
    cout << "Last Transaction: ";
    getline(cin, c1.lastTransaction);

    // Taking user input for second customer
    cout << "\nEnter details for Customer 2:\n";
    cout << "Name: ";
    getline(cin, c2.name);
    cout << "Account Balance: ";
    cin >> c2.accountBalance;
    cin.ignore(); // Clear input buffer
    cout << "Last Transaction: ";
    getline(cin, c2.lastTransaction);

    // Display customer records
    cout << "\nDisplaying Customer Records:\n";
    displayCustomer(c1);
    displayCustomer(c2);

    return 0;
}
