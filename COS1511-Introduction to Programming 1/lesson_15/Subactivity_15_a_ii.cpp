/*
Write a program that displays a times table for any number. For example, 
say the user enters 7, the program should display

The 7 times table is: 7x1=1
7x2=2
:
7 x 12 = 84
Your program should use a for loop.
*/
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Display the times table for the entered number
    cout << "The " << number << " times table is:" << endl;

    // Use a for loop to display the multiplication table from 1 to 12
    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
