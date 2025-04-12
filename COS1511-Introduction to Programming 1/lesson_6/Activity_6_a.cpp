/*
Write a program that inputs (from the keyboard) the prices of three different 
products, adds these together, and then calculates and adds 14% value added 
tax (VAT). Finally it displays the heading The total price is, followed by the total
price with VAT included.
*/
#include <iostream>
using namespace std;

int main() {
    float price1, price2, price3;
    float total, vat, totalWithVAT;
    const float VAT_RATE = 0.14; // 14% VAT

    // Input prices
    cout << "Enter the price of first product: ";
    cin >> price1;
    cout << "Enter the price of second product: ";
    cin >> price2;
    cout << "Enter the price of third product: ";
    cin >> price3;

    // Calculate total price and VAT
    total = price1 + price2 + price3;
    vat = total * VAT_RATE;
    totalWithVAT = total + vat;

    // Display the result
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price is: " << totalWithVAT << endl;

    return 0;
}
