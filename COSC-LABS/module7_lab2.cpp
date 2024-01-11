/*
Author: Angel Chavez
Assignment: module 7 lab 2
Date: 11/16/2023
Language: C++
Description: create 2 datatypes/enums called DaysOfWeek and MonthsOfYear
*/
#include <iostream>

using namespace std;

//declare enunerations
enum DaysOfWeek {Monday, Tuesday, Wednesday, Thursday, Friday, 
                 Saturday, Sunday};
enum MonthsOfYear {January, Feburary, March, April, May, June,
                   July, August, September, October, November, December};

int main()
{
    //declare local variables
    DaysOfWeek day;
    MonthsOfYear month;
    int numDayChoice;
    int numMonthChoice;
    
    //prompt user
    cout << "Enter a number between 1 and 7: ";
    cin >> numDayChoice;
    cout << "Enter a number between 1 and 12: ";
    cin >> numMonthChoice;

    //assigning value to day based off user input
    if(numDayChoice == 1)
        day = Monday;    
    else if(numDayChoice == 2)
        day = Tuesday;    
    else if(numDayChoice == 3)
        day = Wednesday;    
    else if(numDayChoice == 4)
        day = Thursday;    
    else if(numDayChoice == 5)
        day = Friday;    
    else if(numDayChoice == 6)
        day = Saturday;    
    else if(numDayChoice == 7)
        day = Sunday;
    
    //assigning value to month based off user input
    if(numMonthChoice == 1)
        month = January;    
    else if(numMonthChoice == 2)
        month = Feburary;    
    else if(numMonthChoice == 3)
        month = March;    
    else if(numMonthChoice == 4)
        month = April;    
    else if(numMonthChoice == 5)
        month = May;    
    else if(numMonthChoice == 6)
        month = June;    
    else if(numMonthChoice == 7)
        month = July;
    else if(numMonthChoice == 8)
        month = August;    
    else if(numMonthChoice == 9)
        month = September;    
    else if(numMonthChoice == 10)
        month = October;    
    else if(numMonthChoice == 11)
        month = November;    
    else if(numMonthChoice == 12)
        month = December;
    
    //switch statement to output the day
    switch(day)
    {
        case Monday:
            cout << "Monday\n";
            break;
        case Tuesday:
            cout << "Tuesday\n";
            break;
        case Wednesday:
            cout << "Wednesday\n";
            break;
        case Thursday:
            cout << "Thursday\n";
            break;
        case Friday:
            cout << "Friday\n";
            break;
        case Saturday:
            cout << "Saturday\n";
            break;
        case Sunday:
            cout << "Sunday\n";
            break;
        default: 
            cout << "You did not enter a valid number. \n";
    } 

    //switch statement to output the month
    switch(month)
    {
        case January:
            cout << "January";
            break;
        case Feburary:
            cout << "Feburary";
            break;
        case March:
            cout << "March";
            break;
        case April:
            cout << "April";
            break;
        case May:
            cout << "May";
            break;
        case June:
            cout << "June";
            break;
        case July:
            cout << "July";
            break;
        case August:
            cout << "August";
            break;
        case September:
            cout << "September";
            break;
        case October:
            cout << "October";
            break;
        case November:
            cout << "November";
            break;
        case December:
            cout << "December";
            break;
        default: 
            cout << "You did not enter a valid number. ";
    }   

    return 0;
}