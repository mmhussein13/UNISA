/*
Write a program that inputs a list of values for variable x, and for each of these 
values it calculates the value of y using the formula: y = x^3 −3x+1. For example, 
if x is 10, then y should get the value 10^3 - 3(10) + 1 = 1000 - 30 + 1 = 971.
For each value of x, the program must display x and the calculated value of y on one line. 
The input list ends when the value 0 is entered for x.
*/
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double x, y;

    cout << "Enter values for x (enter 0 to stop):" << endl;

    // Loop to process input until 0 is entered
    while (true) {
        // Input value for x
        cin >> x;

        // Check if x is 0 to stop the loop
        if (x == 0) {
            break;
        }

        // Calculate y using the formula y = x^3 - 3x + 1
        y = (x * x * x) - (3 * x) + 1;

        // Display the value of x and y
        cout << "x: " << x << ", y: " << y << endl;
    }

    cout << "Program terminated." << endl;
    return 0;
}
