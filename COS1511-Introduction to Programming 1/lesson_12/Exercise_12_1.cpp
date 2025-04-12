/*
Write a program that reads in three numbers and determines whether the sum of any 
two of the numbers is equal to the remaining number.
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    if ((num1 + num2 == num3) || (num1 + num3 == num2) || (num2 + num3 == num1)) {
        cout << "The sum of two numbers equals the third." << endl;
    } else {
        cout << "The sum of two numbers does not equal the third." << endl;
    }

    return 0;
}
