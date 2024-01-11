/*
Author: Angel Chavez
Assignment:
Date: 10/30/2023
Language: C++
Description: a look at namespaces
*/
#include <iostream>

using  namespace std;

//global variables
int x = 10;

namespace expN
{
    int x;
    int y;
    void printResult();
}
using namespace expN;


int main()
{
    //declare variables
    int x;

    x = 5;
    expN::x = 20;
    y = 60;

    //note where the scope resolution operators are
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;
    cout << "Namespace x: " << expN::x << endl;
    cout << "Namespace y: " << y << endl;
    printResult();
    
    return 0;
}


// prints the qoutient of namespace y / (global x + namespace x)
void expN::printResult()
{
    int result = y / (::x + x);
    cout << "\n y / (global x + expN::x) = " << result << endl;
    cout << y << " / (" << ::x << " + " << expN::x << ") = " << result << endl;
}