/*
Author: Angel Chavez
Assignment: Module 8 Lab 2
Date: 11/30/2023
Language: C++
Description: program that uses parallel
             arrays to store car names and their respective
             Miles Per Gallon (MPG) values.
*/
#include <iostream>
#include <iomanip>

using namespace std;

//funtion prototype
void programHeader();
void displayCarDetails(string[], double[], int);

int main()
{
    //declare arrays & variables
    string cars[] {"Civic", "Camry", "Ram 1500", "Yukon", "Raptor"};
    double MPG[] {33.2, 28.70, 12.33, 13.0, 10.0};
    int carType;

    //calling to my functions in main
    programHeader();

    displayCarDetails(cars, MPG, carType);

    return 0;
}

//function to display car details to user
void displayCarDetails(string typeOfCars[], double MPG[], int economicClass)
{
    //formating the output for the decimals
    cout << setprecision(2) << fixed << showpoint;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(15) << left << typeOfCars[i] 
             << setw(10) << right << MPG[i] << "\t\t";

        // determines the car type
        if (MPG[i] >= 30)
        {
            cout << "Economic";
        }
        else
        {
            cout << "Gas Guzzler";
        }

        cout << endl;
    }

}

//function to display header
void programHeader()
{
    cout << setw(10) << left <<"Car\t\t"
         << setw(5) << right << "MPG\t\t"
         << setw(10) << "Status\n";
    cout << "-------------------------------------------------\n";
}