/*
Author: Angel Chavez
Assignment: 
Date: 10/25/2023
Language: C++
Description: demo enumeration sample
*/
#include <iostream>

using namespace std;

enum card { club, heart, diamond, spade };

int main()
{
    //declare local variable
    string myCard;
    card myEnumCard;

    cout << "Enter suite: ";
    cin >> myCard;

    if(myCard.compare("club") == 0)
        myEnumCard = club;
    else if(myCard.compare("heart") == 0)
        myEnumCard = heart;
    else if(myCard.compare("spade") == 0)
        myEnumCard = spade;
    else if(myCard.compare("diamond") == 0)
        myEnumCard = diamond;        
        
        
    switch(myEnumCard)
    {
        case club:
            cout << "You entered club\n" << endl;
            break;
        case heart:
            cout << "You entered heart\n" << endl;
            break;
        case spade:
            cout << "You entered spade\n" << endl;
            break;
        case diamond:
            cout << "You entered diamond\n" << endl;
            break;
        default:
            cout << "You didnt enter a valid suite: \n";



    }


    return 0;
}