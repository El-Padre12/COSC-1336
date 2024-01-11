/*
Author: Angel Chavez
Assignment: Module 9 Lab 2
Date: 12/5/2023
Language: C++
Description: 
*/
#include <iostream>
#include <iomanip>

using namespace std;

// Car structure definition
struct Car 
{
    string make;
    string model;
    int year;
    double price;
};

// Function prototypes
void carLotInventory(const Car inventory[], int size);
void lotTotalValue(const Car inventory[], int size);

int main() 
{
    // Creating an array of 5 Car structures with pre-populated data
    Car carLot[5] = 
    {
        {"Dodge", "Ram", 2023, 109000.89},
        {"Ford", "F-150", 2019, 4500.68},
        {"Chevy", "Camaro", 2009, 4000.57},
        {"Honda", "Civic", 2015, 19978.88},
        {"Nissan", "GTR", 2018, 98998.99}
    };

    //call to carLotInventory function
    carLotInventory(carLot, 5);

    // call to lotTotalValue function
    lotTotalValue(carLot, 5);

    return 0;
}

// Function to display the entire inventory
void carLotInventory(const Car inventory[], int size)
{
    cout << "Current Inventory:\n";
    cout << setw(10) << "Make" << setw(15) << "Model" 
         << setw(10) << "Year" << setw(15) << "Price" << endl;
    cout << setfill('-') << setw(50) << "-" << setfill(' ') << endl;

    //for loop to display array of structures
    for (int i = 0; i < size; ++i) {
        cout << setw(10) << inventory[i].make 
             << setw(15) << inventory[i].model 
             << setw(10) << inventory[i].year
             //format price output
             << setw(15) << fixed << setprecision(2) << inventory[i].price 
             << endl;
    }
}

// Function to calculate and display the total value of the car lot's inventory
void lotTotalValue(const Car inventory[], int size) 
{
    double totalValue = 0.0;

    //for loop to add up all the prices
    for (int i = 0; i < size; ++i) {
        totalValue += inventory[i].price;
    }

    cout << "\nTotal Value of Inventory: $" << fixed << setprecision(2) 
         << totalValue << endl;
}
