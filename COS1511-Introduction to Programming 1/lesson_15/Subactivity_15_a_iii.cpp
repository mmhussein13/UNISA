/*
Write a program to add interest to an amount of money, but only for one year. 
(In other words, the program should not need a loop.) Your program may only have two 
variables: one for the amount of money and one for the interest rate.
*/
#include <iostream>

using namespace std;

int main() {
    double money, interestRate;

    // Prompt user for the amount of money
    cout << "Enter an amount in Rands: ";
    cin >> money;

    // Prompt user for the interest rate
    cout << "Enter the annual interest rate: ";
    cin >> interestRate;

    cout.setf(ios::fixed); // Set precision to 2 decimal places
    cout.precision(2);

    // Calculate the total amount after one year and add interest
    money = money + money * interestRate / 100;

    cout << "The amount of money after one year is: " << money << endl;

    return 0;
}
