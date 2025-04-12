/*
The number of digits in an integer can be determined by counting the number of times 
the integer can be divided by 10 before the quotient is 0. Write a program to count the 
number of digits in a given integer. Your program should use a do..while loop.
*/
#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> number;

    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number;
    }

    // Use a do..while loop to count the digits
    do {
        number /= 10; // Remove the last digit
        count++;      // Increment the digit count
    } while (number > 0);

    // Display the result
    cout << "The number of digits is: " << count << endl;

    return 0;
}
