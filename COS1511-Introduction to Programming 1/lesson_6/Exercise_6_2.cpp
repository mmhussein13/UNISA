/*
Change the program in Exercise 6.1 above so that it also calculates the total 
price of a wall-to-wall carpet for the room, at R59.50 per square metre.
*/
#include <iostream>
using namespace std;

int main() {
    float length, width, area, total_price;
    const float price_per_sq_meter = 59.50; // Cost per square meter

    // Input room dimensions
    cout << "Enter the length of the room (meters): ";
    cin >> length;

    cout << "Enter the width of the room (meters): ";
    cin >> width;

    // Calculate area
    area = length * width;

    // Calculate total price for carpet
    total_price = area * price_per_sq_meter;

    // Set fixed-point notation with 2 decimal places for currency format
    cout.setf(ios::fixed);
    cout.precision(2);

    // Display results
    cout << "The area of the room is: " << area << " square meters" << endl;
    cout << "The total price for the carpet is: R" << total_price << endl;

    return 0;
}
