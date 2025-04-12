/*
Now write a program that inputs (from the keyboard) the price of a product, 
calculates 14% VAT, and displays the message VAT: , followed by the VAT amount.
*/
#include <iostream>
using namespace std;

int main() {
    float price, vat;

    // Input the price of the product
    cout << "Enter the price of the product: ";
    cin >> price;

    // Calculate VAT (14% of the price)
    vat = price * 0.14;

    // Display the VAT amount
    cout << "VAT: " << vat << endl;

    return 0;
}
