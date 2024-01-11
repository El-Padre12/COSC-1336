/*
Author: Angel Chavez
Assignment:
Date: 8 Nov 2023
Language: C++
Description: C-Strings examples
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //declare out loccal variables
    char name1[25];
    char name2[] = "Scott Raymond";

    strcpy(name1, "Fred Flintstone");
    cout << "name1: " << name1 << endl;
    cout << "the length of name1: " << strlen(name1) << endl << endl;

    cout << "name2: " << name2 << endl;
    cout << "the length of name2: " << strlen(name2) << endl << endl;

    cout << "name1 compared to name2: " << strcmp(name1, name2) << endl
         << endl;
    cout << "name2 compared to name1: " << strcmp(name2, name1) << endl
         << endl;
    cout << "name2 compared to 'Raymond Scott' : " << strcmp(name2, "Scott Raymond")
         << endl << endl;




    return 0;
}