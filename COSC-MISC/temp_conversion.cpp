#include <iostream>

using namespace std;

int main() 
{
    int fahrenheit;
    int celsius;

    cout << "input fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "it is " << celsius << " degrees celsius outside.";

    return 0;
}