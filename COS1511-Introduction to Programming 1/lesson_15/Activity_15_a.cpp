/*
Write a program to calculate the compound interest on an amount of money at a given 
interest rate, for a number of years. After inputting an amount of Rands, an interest 
rate and a number of years to invest the money, the program must calculate and display 
the amount plus compound interest after each year.

Here is an example of what should appear on the screen while the program is running:
    Enter an amount of Rands: 1000.00
    Enter the interest rate: 12.0
    Enter the number of years: 4
    After 1 years the amount will be 1120.00
    After 2 years the amount will be 1254.40
    After 3 years the amount will be 1404.93
    After 4 years the amount will be 1573.52
Use a for loop.
*/
#include <iostream>

using namespace std;

int main() {
    double principal, rate, amount;
    int years;

    // Input section
    cout << "Enter an amount of Rands: ";
    cin >> principal;

    cout << "Enter the interest rate: ";
    cin >> rate;

    cout << "Enter the number of years: ";
    cin >> years;

    amount = principal;

    // Output with 2 decimal precision
    cout.setf(ios::fixed);
    cout.precision(2);

    // Compound interest calculation using for loop
    for (int i = 1; i <= years; ++i) {
        amount *= (1 + rate / 100);  // Calculate compound interest
        cout << "After " << i << " year" << (i > 1 ? "s" : "") 
            << " the amount will be " << amount << endl;
    }

    return 0;
}
