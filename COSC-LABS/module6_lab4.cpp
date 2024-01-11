/*
Author: Angel Chavez
Assignment: module 6 lab 4
Date: 11/9/2023
Language: C++
Description: menu program that calculates 2-3 intgers or doubles.
*/
#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
void menuDisplay();
int addNumbers(int, int);
int addNumbers(int, int, int);
double addNumbers(double, double);
double addNumbers(double, double, double); 

int main()
{
    //formating the output
    cout << fixed << showpoint << setprecision(2);

    //declare local variable
    int usersChoice;
    double result;
    bool exit = false;

    // do, while loop until the user chooses to exit the menu
    do
    {
        //call to menuDisplay function
        menuDisplay();
        cin >> usersChoice;

            switch(usersChoice)
            {
                case 1:
                {
                    int num1, num2;
                    cout << "Enter two integer numbers: ";
                    cin >> num1 >> num2;
                    result = addNumbers(num1, num2);
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    cout << endl;
                    break;
                }

                case 2:
                {
                    int num1, num2, num3;
                    cout << "Enter three integer numbers: ";
                    cin >> num1 >> num2 >> num3;
                    result = addNumbers(num1, num2, num3);
                    cout << "Result: " << num1 << " + " << num2 << " + " << num3 << " = " << result << endl;
                    cout << endl;
                    break;
                }

                case 3:
                {
                    double num1, num2;
                    cout << "Enter two double numbers: ";
                    cin >> num1 >> num2;
                    result = addNumbers(num1, num2);
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    cout << endl;
                    break;
                }

                case 4:
                {
                    double num1, num2, num3;
                    cout << "Enter three double numbers: ";
                    cin >> num1 >> num2 >> num3;
                    result = addNumbers(num1, num2, num3);
                    cout << "Result: " << num1 << " + " << num2 << " + " << num3 << " = " << result << endl;
                    cout << endl;
                    break;
                }

                case 0:
                {
                    cout << "Exiting the calculator. Goodbye!" << endl;
                    exit = true;
                    break;
                }

                default:
                {
                    cout << "Invalid choice! Please enter a valid selection. " << endl << endl;
                    break;
                }
            }

    } while (exit == false);
    

    
    return 0;
}

//declare menuDisplay function
void menuDisplay()
{
    cout << "Welcome to the Programing 1 Calculator\n"
         << "Please enter your selection or enter 0 to exit.\n"
         << "***********************************************\n"
         << "1. Add two integers\n"
         << "2. Add three integers\n"
         << "3. Add two doubles\n"
         << "4. Add three doubles\n"
         << "0. Exit the program\n"
         << "Enter your selection: ";
}

// add two integers function
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

//add three integers function
int addNumbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

//add two double integer function
double addNumbers(double num1, double num2)
{
    return num1 + num2;
}

//add three double integer function
double addNumbers(double num1, double num2, double num3)
{
    return num1 + num2 + num3;
}