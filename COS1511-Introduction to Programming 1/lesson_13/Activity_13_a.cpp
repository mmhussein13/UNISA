/*
Write a program that inputs two floating point numbers and then performs one of 
four operations on them: addition, subtraction, multiplication or division. 
The program must ask the user which one of the operations to perform (specified by 
entering a single character: A, S, M or D).
For example, if the user enters the values 10.0 and 50.0 and asks that 
multiplication be performed on them, the program should display the value 500.0 as 
output.
Remember that division by 0 is not allowed, and the program will therefore have to 
test for this in the division option.
Use a switch statement to perform the correct operation and display the result.
*/
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation to perform (A for addition, S for subtraction, M for multiplication, D for division): ";
    cin >> operation;

    switch (operation) {
        case 'A':
        case 'a':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 'S':
        case 's':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 'M':
        case 'm':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 'D':
        case 'd':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter A, S, M, or D." << endl;
    }

    return 0;
}
