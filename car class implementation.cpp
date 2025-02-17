/*
AUTHOR--AGNES ABUGA
DATE-FEB 16 2025
REG NO--BSE-05-0197/2024
CONTEXT-CAR IMPLEMENTATION
*/


#include <iostream>
using namespace std;

// Define the Car class
class Car {
public:
    string brand;   // Car brand
    string model;   // Car model
    float price;    // Car price
    int mileage;    // Car mileage

    // Constructor to initialize data members
    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    // Function to display car details
    void display() {
        cout << "Car Details:\n";
        cout << "Brand: " << brand << "\n";
        cout << "Model: " << model << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Mileage: " << mileage << " miles\n\n";
    }

    // Function to simulate driving the car
    void drive(int distance) {
        mileage += distance; // Increase mileage
        cout << "Car driven for " << distance << " miles.\n";
        cout << "Updated Mileage: " << mileage << " miles\n\n";
    }
};

// Main function
int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display initial details
    myCar.display();

    // Simulate driving for 150 miles
    myCar.drive(150);

    // Simulate driving for 300 miles
    myCar.drive(300);

    return 0;

}
