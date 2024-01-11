/*
Author: Angel Chavez
Assignment:
Date: 2023
Language: C++
Description: a look at variable scope
*/
#include <iostream>

using namespace std;

//function prototype
void myFunction();

// declare global variables
int myGlobalNumber = 10;


int main()
{
    //declar local variables
    int myLocalNumber = 20;

    cout << "my global variable " << myGlobalNumber << endl;
    cout << "my local variable " << myLocalNumber << endl;
    //cout << "my function variable " << myFunctionNumber << endl;
    cout << endl;
    myFunction();

    return 0;
}

void myFunction()
{
    //declare local variables
    int myFunctionNumber = 30;

    cout << "my global variable " << myGlobalNumber << endl;
    cout << "my function variable " << myFunctionNumber << endl;
    //cout << "my local variable " << myLocalNumber << endl;
}