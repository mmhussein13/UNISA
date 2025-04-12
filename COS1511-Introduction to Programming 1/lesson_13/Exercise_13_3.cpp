/*
Write a program to help the cashier at a parkade determine the amount of money owed 
by a user of the parkade. The program must ask whether the vehicle is a motorcar 
or a truck and then read in the number of hours that the person was parked. 
Any part of an hour is considered as a whole hour. The charges are: R2 for the 
first hour, R3 for 2 hours, R5 for 3 to 5 hours and R10 for more than 5 hours.
An extra R1 is added for trucks. Assume that the vehicle will not be parked for 
longer than 24 hours in the parkade.
*/
#include <iostream>
using namespace std;

int main() {
    char vehicleType;
    int hoursParked;

    cout << "Is the vehicle a motorcar (M) or a truck (T)? ";
    cin >> vehicleType;
    cout << "Enter the number of hours parked: ";
    cin >> hoursParked;

    // Round up to the nearest whole hour if necessary
    if (hoursParked % 1 != 0) {
        hoursParked = hoursParked + 1;
    }

    int baseFee;
    if (hoursParked == 1) {
        baseFee = 2;
    } else if (hoursParked == 2) {
        baseFee = 3;
    } else if (hoursParked >= 3 && hoursParked <= 5) {
        baseFee = 5;
    } else {
        baseFee = 10;
    }

    // Add extra fee for trucks
    if (toupper(vehicleType) == 'T') {
        baseFee += 1;
    }

    cout << "The parking fee is R" << baseFee << endl;

    return 0;
}

