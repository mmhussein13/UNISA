/*
A simple rule to determine whether a year is a leap year is to test whether it is a multiple of 4.
Write a program to input a year number and a number of years, and then to determine and display which of those years were (or will be) leap years. Here is an example of the user interaction:
    What year do you want to start with? 1994
    How many years do you want check? 8
    1994 isn’t a leap year
    1995 isn’t a leap year
    1996 is a leap year
    1997 isn’t a leap year
    1998 isn’t a leap year
    1999 isn’t a leap year
    2000 is a leap year
    2001 isn’t a leap year
*/
#include <iostream>
using namespace std;

int main() {
    int startYear, numYears;

    // Prompt the user for the starting year and the number of years to check
    cout << "What year do you want to start with? ";
    cin >> startYear;

    cout << "How many years do you want to check? ";
    cin >> numYears;

    // Loop through the specified number of years
    for (int i = 0; i < numYears; i++) {
        int currentYear = startYear + i;

        // Determine if the current year is a leap year
        if ((currentYear % 4 == 0 && currentYear % 100 != 0) || (currentYear % 400 == 0)) {
            cout << currentYear << " is a leap year" << endl;
        } else {
            cout << currentYear << " isn’t a leap year" << endl;
        }
    }

    return 0;
}
