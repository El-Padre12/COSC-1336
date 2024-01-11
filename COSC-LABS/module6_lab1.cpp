/*
Author: Angel Chavez
Assignment: module 6 lab 1
Date: 11/8/2023
Language: C++
Description: 
*/
#include <iostream>
#include <iomanip>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;
using std::setprecision;

// function prototype
void header();
double newBalance(double, double);


int main()
{
    //formating the output
    cout << fixed << showpoint << setprecision(2);

    //declare local variables
    double initialBalance;
    double deposit;

    //call to the header function
    header();
    cout << "Please enter your initial balance: ";
    cin >> initialBalance;
    cout << "Please enter your deposit amount: ";
    cin >> deposit;

    //call to the newBalance function
    cout << "Your new balance is: " << "$" << newBalance(initialBalance,  deposit) << endl;

    return 0;
}

//declare the header function
void header()
{
    cout << "*************************" << endl;
    cout << "      Alamo Bank         " << endl;
    cout << "*************************" << endl;
}

//declare the newBalance function
double newBalance(double initial, double deposit)
{
    return(initial + deposit);
}