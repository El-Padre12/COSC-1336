/*
Author: Angel Chavez
Assignment:
Date: 2023
Language: C++
Description: example of multimensional arrays
*/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // declare local variables
    //declare an arrray - fille in one row at a time
    int x[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    //initialize each row with a set
    int y[3][4] = { {3,2,1,0}, {11,10,9,8}, {7,6,5,4} };
    
    //initialize with a nested for loop
    int z[3][4];
    for(int row = 0; row < 3; row++)
        for(int col = 0; col < 4; col++)
            z[row][col] = 1;


    // iterate through the array
    //read array x
    cout << "\nArray x: \n";
    for(int row = 0; row < 3; row++)
    {    for(int col = 0; col < 4; col++)
            cout << x[row][col] << " ";
        cout << endl;

    }

    //read array y
    cout << "\nArray y: \n";
    for(int row = 0; row < 3; row++)
    {    for(int col = 0; col < 4; col++)
            cout << y[row][col] << " ";
        cout << endl;

    }

    //read array z
    cout << "\nArray z: \n";
    for(int row = 0; row < 3; row++)
    {    for(int col = 0; col < 4; col++)
            cout << z[row][col] << " ";
        cout << endl;

    }
    return 0;
}