/*
Author: Angel Chavez
Assignment:
Date: 11/8/2023
Language: C++
Description: end of arrays module, example uses multiples arrays and passes arrays to functions
the program will create random sentences
*/
#include <iostream>
#include <ctime>

using namespace std;

//function prototypes
string getWord(string[]);
void printSentence(string[]);

int main()
{
    //seed the random number generator
    srand(time(NULL));

    //declare local variables
    string articles[] = {"the", "a", "one", "some", "any"};
    string nouns[] = {"boy", "girl", "dog", "town", "car"};
    string verbs[] = {"drove", "jumped", "ran", "walked", "skipped"};
    string preposistions[] = {"to", "from", "over", "under", "on"};
    string sentences[20][6]; //array to hold 20 sentences

    //for each of the 20 sentences select the 6 words
    for(int index = 0; index < 20; index++)
    {
        //get the six words
        sentences[index][0] = getWord(articles);
        sentences[index][1] = getWord(nouns);
        sentences[index][2] = getWord(verbs);
        sentences[index][3] = getWord(preposistions);
        sentences[index][4] = getWord(articles);
        sentences[index][5] = getWord(nouns);

    }    

        //print each of the 20 sentences
        for(int index = 0; index < 20; index++)
            printSentence(sentences[index]);

    



    return 0;
}

//function to get a word from an array of 5 words
string getWord(string wordList[])
{
    // declare local variable
    int randomNumber = rand() % 5;

    //return the word at the index random number
    return wordList[randomNumber];
}

// function to print a sentence from an array of 6 words
void printSentence(string sentence[])
{
    // for each of the 6 words print the word
    for(int word = 0; word < 6; word++)
        cout << " " << sentence[word];

    // put a period at the end of the sentence
    cout << ".\n";
}