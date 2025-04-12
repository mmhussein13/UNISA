/*
Write a switch statement that uses two integer variables month (1 to 12 ) and year 
and displays the number of days in that month. Leap years must be taken into account.
(Hint: Exercise 12.3 explains how to determine whether a year is a leap year. 
For February you will therefore need to use nested if statements inside the switch 
statement.)
*/
#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter the month (1-12): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "The month has 31 days." << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "The month has 30 days." << endl;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "The month has 29 days." << endl;
            } else {
                cout << "The month has 28 days." << endl;
            }
            break;
        default:
            cout << "Invalid month. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
