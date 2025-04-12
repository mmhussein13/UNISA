/*
The SupaDupa clothing store has a sale on. For any items less than R200.00, 
the standard discount is 10%. For items worth R200.00 or more, the discount 
must be decided individually by the store manager.
Write a program that inputs the price of an item, calculates the discount, 
and then displays the old and new price in the form of a tag which can be printed 
and attached to the item. Here is an example of the user interaction:
    Enter old price: 289.00
    Enter special discount %: 15
    =============
    Was: R289.00
    Discount: 15%
    Now: R245.65
    =============
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Input the original price of the item
    double oldPrice;
    cout << "Enter old price: R";
    cin >> oldPrice;

    double discountRate;
    if (oldPrice < 200.00) {
        // Standard discount of 10% for items less than R200.00
        discountRate = 10;
    } else {
        // Manager decides the discount for items worth R200.00 or more
        cout << "Enter special discount %: ";
        cin >> discountRate;
    }

    // Calculate the new price
    double discountAmount = oldPrice * (discountRate / 100);
    double newPrice = oldPrice - discountAmount;

    // Display the printable tag
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "=============\n";
    cout << "Was: R" << oldPrice << "\n";
    cout << "Discount: " << discountRate << "%\n";
    cout << "Now: R" << newPrice << "\n";
    cout << "=============\n";

    return 0;
}
