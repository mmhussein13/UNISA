/*
Write a program that determines whether a year is a leap year. A leap year is a 
year which is divisible by 4, and if it is divisible by 100, it must also be 
divisible by 400.
*/
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
