/*
Author: Angel Chavez
Assignment:
Date: 10/18/2023
Language: C++
Description: overloading functions
*/
#include <iostream>

using namespace std;

//functioin prototypes
int addTwoNumbers(int, int);
double addTwoNumbers(double, double);

int main()
{
     //declare local variables
     int num1 = 10;
     int num2 = 20;
     double num3 = 15.75;
     double num4 = 25.5;

     cout << "call addTwoNumbers with integers:\n";
     cout << "\tresult: " << addTwoNumbers(num1, num2) << endl << endl;

     cout << "call addTwoNumbers with doubles:\n";
     cout << "\tresult: " << addTwoNumbers(num3, num4) << endl << endl;

     return 0;
}


//adds two integers and returns result
int addTwoNumbers(int int1, int int2)
{
     return int1 + int2;
}

double addTwoNumbers(double double1, double double2)
{
     return double1 + double2;
}