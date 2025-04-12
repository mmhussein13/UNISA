/*
Write a program to input two integers and to determine if the first number is 
a factor of the second. (One number is a factor of another if it divides into the 
other number without a fraction.) Here is an example of the output of the program:
*/
#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    if (number2 % number1 == 0) {
        cout << number1 << " is a factor of " << number2 << endl;
    } else {
        cout << number1 << " is not a factor of " << number2 << endl;
    }
    return 0;
}