/*
Author: Angel Chavez
Assignment: module 9 lab 3
Date: 12/8/2023
Language: C++
Description: program that manages a list of students
             using a structure. 
*/
#include <iostream>
#include <string>

using namespace std;

//declare structure
struct student
{
    string FullName;
    string BannerID;
    int Age;
    double GPA;
    string Email;
    string Number;
};

int main()
{
    //declare local variables
    int numOfStudents;
    double totalGPA = 0.0;
    double averageGPA;

    //prompt user
    cout << "Please enter the amount of students: ";
    cin >> numOfStudents;

    //declare array of student struct
    student studentsDetails[numOfStudents];

    //for loop that gets details of each student from user.
    for(int i = 0; i < numOfStudents; i++)
    {
        cout << "\nPlease enter details for each student " 
             << i + 1 << ":\n";
        cout << "Full Name: ";

        cin.ignore(); //ignores \n character in the buffer

        //getline() for spaces in input
        getline(cin, studentsDetails[i].FullName);
        cout << "BannerID: ";
        cin >> studentsDetails[i].BannerID;
        cout << "Age: ";
        cin >> studentsDetails[i].Age;
        cout << "GPA: ";
        cin >> studentsDetails[i].GPA;
        cout << "Email: ";
        cin >> studentsDetails[i].Email;
        cout << "Phone: ";
        cin >> studentsDetails[i].Number;

        //accumalate GPA for calculating average
        totalGPA += studentsDetails[i].GPA;
    }

    //output details for each student
    cout << "\nDetails for each student: \n";

    //for loop to out put every single students details
    for(int i = 0; i < numOfStudents; i++)
    {
        cout << "Student " << i + 1 << ": \n";
        cout << "Full Name: " <<studentsDetails[i].FullName << endl;
        cout << "Banner ID: " <<studentsDetails[i].BannerID << endl;
        cout << "Age: " <<studentsDetails[i].Age << endl;
        cout << "GPA: " <<studentsDetails[i].GPA << endl;
        cout << "Email: " <<studentsDetails[i].Email << endl;
        cout << "Phone: " <<studentsDetails[i].Number << endl << endl;   
    }
    
    //calculate average
    averageGPA = totalGPA / numOfStudents;
    cout << "\nAverage GPA of all students: " << averageGPA << endl;

    return 0; 
}