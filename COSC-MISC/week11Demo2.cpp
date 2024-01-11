/*
Author: Angel Chavez
Assignment:
Date: 2023
Language: C++
Description: 
*/
#include <iostream>

using namespace std;

enum triangleType{ scalene, isosceles, equilateral, noTriangle };

//function prototypes
triangleType triangleShape( double, double, double);
void printShape(triangleType);

int main()
{   //declare local variable
    double lenSide1, lenSide2, lenSide3;

    cout << "Enter the length of the 3 sides of a triangle. \n";
    cin >> lenSide1 >> lenSide2 >> lenSide3;
    cout << endl;

    triangleType myTri = triangleShape(lenSide1, lenSide2, lenSide3);
    cout << "The shape of the triangle is: ";
    printShape( myTri );
    cout << endl;





return 0;
}

//determine the type of triangle given the side length
triangleType triangleShape(double side1, double side2, double side3)
{
    //3 sides of equal length - equilateral
    if(side1 == side2 && side2 == side3)
        return equilateral;
    //make sure sides equal a triangle
    if((side1 + side2 > side3) && (side2 + side3 > side1) &&
       (side1 + side3 > side2))
    {
        //2 sides of the same length - isoceles
        if(side1 == side2 || side2 == side3 || side1 == side3)
            return isosceles;
        //no sides of equal length
        else
            return scalene;
    }
    // sides do not make a triangle
    else
        return noTriangle;

}


//print the shape of the triangle
void printShape(triangleType triangle)
{
    switch(triangle)
    {
        case 0:  //scalene
            cout << "Scalene\n";
            break;
        case 1:  //isosceles
            cout << "Isosceles\n";
            break;
        case equilateral:  //
            cout << "Equilateral\n";
            break;
        case noTriangle:  //isosceles
            cout << "Not a triangle\n";
            break;

    }
}