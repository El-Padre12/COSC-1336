/*
Author: Angel Chavez
Assignment: module 5 lab 1
Date: 10/25/2023
Language: C++
Description: outputs how many numbers between any two integers are multiples of 2 and 5
*/
#include <iostream>

using namespace std;

int main()
{   
    //declare variables
    int num1, num2;
    int multiplesOfThree = 0;
    int multiplesOfFive = 0;
    
    //prompt user input
    cout << "Enter integer one: ";
    cin >> num1;
    cout << "Enter integer two: ";
    cin >> num2;

    // if statement incase the user inputs a higher integer first
    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int count = num1; count <= num2; count++)
    {
        if ( count % 5 == 0)
            multiplesOfFive++;

        if (count % 3 == 0)
            multiplesOfThree++;
    }

    //output to user
    cout << "The lower range: " << num1 << endl;
    cout << "The upper range: " << num2 << endl;
    cout << "The count of the numbers that are in the range that are multiple of 3: "
         << multiplesOfThree << endl;
    cout << "The count of the numbers that are in the range that are multiple of 5: "
         << multiplesOfFive << endl;

    return 0;
}