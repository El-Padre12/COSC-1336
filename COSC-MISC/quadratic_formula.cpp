/*
Author: Angel Chavez
Assignment:
Date:9/20/2023
Language: C++
Description: find X in the quadratic equation when the user
inputs A, B, & C
*/
#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x;

    cout << "Enter the values for a,b,c ";
    cin >> a >> b >> c;

    //calculate numbers
    x = (-b + sqrt( (b * b) -4 * a * c)) / 2 * a;
    cout << "the first possible answer is: " << x << endl;

    x = (+b + sqrt( (b * b) -4 * a * c)) / 2 * a;
    cout << "the second possible answer is: " << x << endl;





    return 0;
}