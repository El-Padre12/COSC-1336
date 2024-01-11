/*
Author: Angel Chavez
Assignment:
Date: 11/15/2023
Language: C++
Description: aray of structures example
*/
#include <iostream>
#include <iomanip>

using namespace std;

//declare structure outside of main
struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main()
{
    //declare local variable
    const int ARRAY_SIZE = 3;
    computerType computer[ARRAY_SIZE] = 
    {
        {"Dell", "XPS", "Intel", 16, 512, 2022, 987.00},
        {"Sony", "CP01", "i9", 32, 1000, 2021, 1254.00},
        {"Apple", "MacBook", "M2", 16, 1000, 2022, 1600.00}
    };

    //output our structure data
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "\n******************************\n";
        cout << "Manufacturer: " << computer[i].manufacturer << endl;
        cout << "Model: " << computer[i].modelType << endl;
        cout << "Processor: " << computer[i].processorType << endl;
        cout << "RAM: " << computer[i].ram << endl;
        cout << "Hard Drive size: " << computer[i].hardDriveSize << endl;
        cout << "Year Built: " << computer[i].yearBuilt << endl;
        cout << "Price: $" << computer[i].price << endl;
    }

    /*cout << "\n\nUsing the ranged based for loop\n\n";
    
    for(computerType c : computer)
    {
        cout << "\n******************************\n";
        cout << "Manufacturer: " << c.manufacturer << endl;
        cout << "Model: " << c.modelType << endl;
        cout << "Processor: " << c.processorType << endl;
        cout << "RAM: " << c.ram << endl;
        cout << "Hard Drive size: " << c.hardDriveSize << endl;
        cout << "Year Built: " << c.yearBuilt << endl;
        cout << "Price: $" << c.price << endl;
    }*/

    return 0;
}