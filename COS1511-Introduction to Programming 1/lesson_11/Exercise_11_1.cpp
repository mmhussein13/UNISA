/*
The municipality of a small town needs a program to calculate the amount payable for 
water consumption for each home (or business). The rate depends on the number of 
units of water that were used.
􏰀 The first 20 units are free.
􏰀 A fixed rate of R10 per unit is payable for the additional units if 40 units or 
less are used.
􏰀 If more than 40 units but not more that 100 units are used, the cost is 1.5 times 
the fixed rate (for the additional units).
􏰀 If more than 100 units are used, the cost is 2 times the fixed rate (for the 
additional units).
Write a program to input the units used (as a floating point number) and to output 
the amount payable.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double units;
    cout << "Enter the units of water used: ";
    cin >> units;

    double additional_units = max(units - 20.0, 0.0); // Units beyond the first 20
    double rate;

    if (units <= 40.0) {
        rate = 10.0; // R10 per additional unit if ≤40 total units
    } else if (units <= 100.0) {
        rate = 15.0; // 1.5× rate (R15) for 41–100 total units
    } else {
        rate = 20.0; // 2× rate (R20) for >100 total units
    }

    double amount_payable = additional_units * rate;

    // Display result with 2 decimal places
    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale("en_US.UTF-8"));
    cout << "Amount payable: R" << amount_payable << endl;

    return 0;
}
