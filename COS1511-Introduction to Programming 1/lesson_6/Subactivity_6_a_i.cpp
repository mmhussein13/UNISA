/*
Write a program to input three floating point values and display their sum. 
Use a separate variable for the sum.
*/
#include <iostream>

using namespace std;

int main() {
    // Declare variables
    float num1, num2, num3, sum;

    // Input three floating-point numbers
    cout << "Enter three floating-point numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calculate the sum
    sum = num1 + num2 + num3;

    // Display the result
    cout << "The sum is: " << sum << endl;

    return 0;
}
