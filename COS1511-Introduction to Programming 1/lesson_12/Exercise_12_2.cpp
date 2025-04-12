/*

Write a program that reads in two numbers representing the throw of a pair of dice. 
If a total of 7 or 11 is entered, display the message “You win!”. If the total is 2, 
display “Snake eyes!”, if the total is 12, display “Good shot!”, otherwise display 
“Try again.”
*/
#include <iostream>
using namespace std;

int main() {
    int die1, die2;

    cout << "Enter the result of the first die: ";
    cin >> die1;
    cout << "Enter the result of the second die: ";
    cin >> die2;

    int total = die1 + die2;

    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    } else if (total == 2) {
        cout << "Snake eyes!" << endl;
    } else if (total == 12) {
        cout << "Good shot!" << endl;
    } else {
        cout << "Try again." << endl;
    }

    return 0;
}
