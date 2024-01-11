/*
Author: Angel Chavez
Assignment: Module 8 Lab 3
Date: 12/1/2023
Language: C++
Description: voting program that displays total votes
             as well as the winner.
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//declare global constant
const int Num_Candidates = 5;

// Function prototypes
void getInput(string[], int[]);
void displayResults(const string[], const int[]);
void calculatePercentages(const int[], double[]);
int findWinner(const double[]);

int main()
{
    //declare local arrays
    string candidateNames[Num_Candidates];
    int votesReceived[Num_Candidates];

    // Get input from the user
    getInput(candidateNames, votesReceived);

    // Display results
    displayResults(candidateNames, votesReceived);

    return 0;
}

// Function to get input from the user
void getInput(string names[], int votes[])
{
    //prompt user
    cout << "Enter the last names of the five candidates "
            "and the number of votes received by each:\n";

    //for loop to keep prompting the user
    for (int i = 0; i < Num_Candidates; ++i)
    {
        cout << "Candidate " << (i + 1) << " last name: ";
        cin >> names[i];

        cout << "Votes received by " << names[i] << ": ";
        cin >> votes[i];
    }
}

// Function to display results
void displayResults(const string names[], const int votes[])
{
    //declare percentages array
    double percentages[Num_Candidates];

    //call to calculatePercentages()
    calculatePercentages(votes, percentages);

    //cout << "\nResults:\n";
    cout << endl;
    cout << setw(20) << left << "Candidate" << setw(15) << right 
         << "Votes Received" << setw(15) << "Percentage\n";
    cout << "---------------------------------------------\n";

    int totalVotes = 0;

    //for loop to display the names votes and perscentages for each candidate
    for (int i = 0; i < Num_Candidates; ++i)
    {
        cout << setw(20) << left << names[i] << setw(15) << right << votes[i] 
             << setw(15) << fixed << setprecision(2) << percentages[i] << "%\n";
        
        totalVotes += votes[i];
    }

    cout << "---------------------------------------------\n";
    cout << setw(20) << left << "Total Votes" << setw(15) << right << totalVotes
         << endl;

    int winnerIndex = findWinner(percentages);
    cout << "\nThe Winner of the Election is: " << names[winnerIndex] << endl;
}

// Function to calculate percentages
void calculatePercentages(const int votes[], double percentages[])
{
    //declare local variable
    int totalVotes = 0;

    //for loop to calculate the value of totalVotes
    for (int i = 0; i < Num_Candidates; ++i)
    {
        totalVotes += votes[i];
    }

    //for loop to calculate the percentage of votes for
    //each candidate
    for (int i = 0; i < Num_Candidates; ++i)
    {
        percentages[i] = static_cast<double>(votes[i]) / totalVotes * 100.0;
    }
}

// Function to find the index of the candidate with the highest percentage
int findWinner(const double percentages[])
{
    //declare local variable
    int winnerIndex = 0;

    //for loop to calculate the winner
    for (int i = 1; i < Num_Candidates; ++i)
    {
        if (percentages[i] > percentages[winnerIndex])
        {
            winnerIndex = i;
        }
    }

    return winnerIndex;
}
