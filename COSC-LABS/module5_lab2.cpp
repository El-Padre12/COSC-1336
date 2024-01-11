/*
Author: Angel Chavez
Assignment: module 5 lab 2
Date: 10/27/2023
Language: C++
Description:  "Box" program that will ask the user for a character, as well as the length and
Height of the box, and output to the terminal the Box information and character-based depiction
of the box 
*/
#include <iostream>

using namespace std;

int main () 
{

    //declares variables
    int length;
    int height;
    char character = '*' || '#';
    string shape;
    string rectangle;

    // user input & ouput
    cout << endl;
    cout << "Character to choose from: *  # \n";

    cout << "Please enter a character: ";
    cin >> character;

    cout << "Box length: ";
    cin >> length;

    cout << "Box Height: ";
    cin >> height;

    // if statement shape ID
    if (height > length || height < length) 
    {
        cout << "This is a: rectangle" << endl;
    }
    else if (height == length) {
        cout << "This is a: square" << endl;
    }


    // if statement character -- for statement for box shape
    if (character == '#')
    {
        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < length; col++) 
            {
                cout << "# ";
            }
            cout << endl;
        }
    }
    else if (character == '*') 
    {
     for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < length; col++) 
            {
                cout << "* ";
            }
            cout << endl;
        }

    }
    
    return 0;
}
     