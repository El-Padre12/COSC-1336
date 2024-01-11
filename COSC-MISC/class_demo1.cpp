/*
Author: Angel Chavez
Assignment:
Date: 10/18/2023
Language: C++
Description: call by value/ call by reference
*/
#include <iostream>

using namespace std;

//function prototype
void callByValue(int, int);
void callByReference(int&, int&);

int main()
{
     //declare variable
     int firstNumber = 10;
     int secondNumber = 5;

     cout << "Before call by value\n";
     cout << "\tFirst Number: " << firstNumber << endl;
     cout << "\tSecond Number: " << secondNumber << endl << endl;

     //call the call by value function
     callByValue(firstNumber, secondNumber);
     cout << "After call by value\n";
     cout << "\tFirst Number: " << firstNumber <<endl;
     cout << "\tSecond Number: " << secondNumber <<endl << endl;

     //call the callByReference function
     callByReference(firstNumber, secondNumber);
     cout << "After call by reference\n";
     cout << "\tFirst Number: " << firstNumber <<endl;
     cout << "\tSecond Number: " << secondNumber <<endl << endl;


     return 0;
}


//swaps two integers using pass by value
void callByValue(int num1, int num2)
{
     int temp;  //used to swap numbers

     temp = num1;
     num1 = num2;
     num2 = temp;

     cout << "Inside call by value\n";
     cout << "\tFirst Number: " << num1 <<endl;
     cout << "\tSecond Number: " << num2 <<endl << endl;

}

//swaps two integers using pass by reference
void callByReference(int& num1, int& num2)
{
     int temp;  //used to swap numbers

     temp = num1;
     num1 = num2;
     num2 = temp;

     cout << "Inside call by reference\n";
     cout << "\tFirst Number: " << num1 <<endl;
     cout << "\tSecond Number: " << num2 <<endl << endl;

}