/*
AUTHOR--AGNES ABUGA
DATE-MARCH 16 2025
REG NO--BSE-05-0197/2024
CONTEXT-PATIENT'S DIAGNOSIS
*/


#include <iostream>
#include <string>

using namespace std;

// Define Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatients(const Patient& p) {
    cout << "Patient Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
    cout << "-------------------------" << endl;
}

int main() {
    // Creating two patient records with user input
    Patient p1, p2;

    cout << "Enter details for Patient 1:\n";
    cout << "Name: ";
    getline(cin, p1.name);
    cout << "Age: ";
    cin >> p1.age;
    cin.ignore(); // Clear input buffer
    cout << "Diagnosis: ";
    getline(cin, p1.diagnosis);

    cout << "\nEnter details for Patient 2:\n";
    cout << "Name: ";
    getline(cin, p2.name);
    cout << "Age: ";
    cin >> p2.age;
    cin.ignore(); // Clear input buffer
    cout << "Diagnosis: ";
    getline(cin, p2.diagnosis);

    // Display patient records
    cout << "\nDisplaying Patient Records:\n";
    displayPatients(p1);
    displayPatients(p2);

    return 0;
}
