/*
Write a program that asks the user for an integer between 10 and 20. 
It must then test whether the number is indeed between 10 and 20, and if not, 
repeatedly ask for the number to be entered again until it is within the correct 
boundaries.
*/
#include <iostream>
using namespace std;

int main() {
    int number = 10;

    while (true) {
        cout << "Enter a number between 10 and 20: ";
        cin >> number;

        if (number >= 10 && number <= 20) {
            cout << "Your number is valid! " << number << endl;
            break;
        } else {
            cout << "Invalid input. Please try again." << endl; 
        }
    }
    return 0;
}