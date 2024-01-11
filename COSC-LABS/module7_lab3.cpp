/*
Author: Angel Chavez
Assignment: module 7 lab 3
Date: 11/18/2023
Language: C++
Description: create my own namespaces with functions in each one. 
            then call to the function from each different namespace in main.
*/
#include <iostream>

using namespace std;

//defining namespace1
namespace namespace1
{
    void displayMessage(); //adding function as member
}

//defining namespace2
namespace namespace2
{
    void displayMessage(); //overloading function
}

//using namespace namespace1;
//using namespace namespace2;
int main()
{
    namespace1::displayMessage();

    namespace2::displayMessage();

    return 0;
}

//defining functions
void namespace1::displayMessage()
{
    cout << "\nHello from Namespace 1!\n";
}

void namespace2::displayMessage()
{
    cout << "\nHello from Namespace 2!\n";
}