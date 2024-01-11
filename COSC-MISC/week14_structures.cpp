/*
Author: Angel Chavez
Assignment:
Date: 11/15/2023
Language: C++
Description: demo of structures
*/
#include <iostream>
#include <string>
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

// function prototype
void printComputerInfo(computerType);


int main()
{
    //declare variables
    computerType computer; //create an instance of computerType

    //set output for double format
    cout << fixed << showpoint << setprecision(2);

    //get the structure data members and store in the structure
    cout << "Enter the name of the manufacturer: ";
    getline(cin, computer.manufacturer);
    cout << endl;

    cout << "Enter the model of the computer: ";
    getline(cin, computer.modelType);
    cout << endl;

    cout << "Enter the proccessor type: ";
    getline(cin, computer.processorType);
    cout << endl;

    cout << "Enter the size of RAM(in GB): ";
    cin >> computer.ram;
    cout << endl;

    cout << "Enter the size of the hard drive(in GB): ";
    cin >> computer.hardDriveSize;
    cout << endl;

    cout << "Enter the year the computer was built: ";
    cin >> computer.yearBuilt;
    cout << endl;

    cout << "Enter the price: ";
    cin >> computer.price;
    cout << endl;

    //call the function to output the computer data
    printComputerInfo(computer);

    return 0;
}

//output the attributer of a computerType data type
void printComputerInfo(computerType pComputer)
{
    //output the structure data
    cout << "Manufacturer: " << pComputer.manufacturer << endl;
    cout << "Model: " << pComputer.modelType << endl;
    cout << "Processor: " << pComputer.processorType << endl;
    cout << "RAM: " << pComputer.ram << endl;
    cout << "Hard Drive size: " << pComputer.hardDriveSize << endl;
    cout << "Year Built: " << pComputer.yearBuilt << endl;
    cout << "Price: $" << pComputer.price << endl;
}