/*
Author: Angel Chavez
Assignment:module 6 lab 6
Date: 10/25/2023
Language: C++
Description: menu for Coffee shop to make it operational. will display money made,
             coffee sold, sizes sold. and buy coffee at any given time. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

//first - we protoype our functions
void printHeader(string);
void printLine();
void menuDisplay ();
void sellCoffee(int, double);
void showSalesInfo();


//Global variable
int smallCoff = 0;
int mediumCoff = 0;
int largeCoff = 0;
double total = 0;
int quantity;



/* *************************
 Our Main Program
 *************************** */
int main ()
{
    //declare variables
    int choice;

    //user input/output
    printHeader("Sam's Coffee Shop");
    do {
        menuDisplay();
        cin >> choice;
        switch (choice) {
            case 1:
                sellCoffee(9, 1.75);
                cout << endl;
                break;
            case 2:
                sellCoffee(12, 1.90);
                cout << endl;
                break;
            case 3:
                sellCoffee(15, 2.00);
                cout << endl;
                break;
            case 4:
                showSalesInfo();
                cout << endl;
                break;
            case 5:cout << "Thank you for using Sam's Coffee Shop program. Have a great day!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 5);
    
    return 0;

} // END OF MAIN

// Define our functions after our main program.
void printLine() 
{
    cout << "*******************************************************" << endl;

}
void printHeader(string pMessage) 
{
    printLine();
    cout << "\t\t" << pMessage << endl;
    printLine();
}
void menuDisplay ()
{
    cout << "Please make a selection from the following Menu:" << endl;
    cout << "1) Small Coffee (9 oz): $1.75  " << endl;
    cout << "2) Medium Coffee (12 oz): $1.90" << endl;
    cout << "3) Large Coffee (15 oz): $2.00" << endl;
    cout << "4) Show Total Profit" << endl;
    cout << "5) Quit Program" << endl;
    cout << "Enter your choice: ";

}
// Function to sell coffee
void sellCoffee(int size, double price) {
    int quantity;
    cout << "Enter the number of cups: ";
    cin >> quantity;

//
if (size == 9) 
{
    smallCoff += quantity;
}
else if (size == 12) 
{
    mediumCoff += quantity;
}
else if (size == 15) 
{
    largeCoff += quantity;
}
double revenue = quantity * price;
total += revenue;

cout << "Sold " << quantity << " cups of coffee for $ " << fixed << setprecision(2) << revenue << endl;
}
void showSalesInfo() 
{
    cout << endl;
    cout << "Sales Information:" << endl;
    cout << "Small Coffee (9 oz) : " << smallCoff << " cups sold" << endl;
    cout << "Medium Coffee (12 oz) : " << mediumCoff << " cups sold" << endl;
    cout << "Large Coffee (15 oz) : " << largeCoff << " cups sold" << endl;
    cout << "Total amount of coffee sold: " << smallCoff + mediumCoff + largeCoff << " cups" << endl;
    cout << "Total money made: $" << fixed << setprecision(2) << total << endl;
}