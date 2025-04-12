/*
A big supermarket has the following special offer on all breakfast cereals: 
Depending on the amount of money spent by a customer, a certain discount is awarded. 
The discount is determined as follows:
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double amountSpent, discountRate, discountedPrice;

    cout << "Enter the amount spent (R): ";
    cin >> amountSpent;

    // Determine the discount rate based on the amount spent
    if (amountSpent < 50) {
        discountRate = 10.0; // 10% discount
    } else if (amountSpent < 70) {
        discountRate = 20.0; // 20% discount
    } else if (amountSpent < 100) {
        discountRate = 30.0; // 30% discount
    } else if (amountSpent < 200) {
        discountRate = 40.0; // 40% discount
    } else {
        discountRate = 50.0; // 50% discount
    }

    // Calculate the discounted price
    discountedPrice = amountSpent - (amountSpent * discountRate / 100);

    // Display the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale("en_US.UTF-8"));
    cout << "Discount rate: " << discountRate << "%" << endl;
    cout << "Discounted price: R" << discountedPrice << endl;

    return 0;
}
