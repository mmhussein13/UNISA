/*
When Bongi’s new baby, Sipho, was born, she opened a savings account
with R1000.00. On each birthday, starting with the first, the bank added 
interest of 4.5% of the balance and Bongi added another R500.00 to the account. 
Write a loop that will calculate how much money was in the account on 
Sipho’s 18th birthday.
*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial deposit at birth
    int age = 0; // Starting age

    while (age < 18) {
        balance *= 1.045; // Add 4.5% interest
        balance += 500.0; // Add R500 deposit
        age++; // Increment age
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale("en_US.UTF-8")); // Set locale to format numbers with thousands separator

    cout << "Amount on Sipho's 18th birthday: R" << balance << endl;

    return 0;
}
