/*
Your child wants to go to university and you must consider all the options. 
You state the case as follows to her: If she obtains 90% of higher, she can go to 
any university of her choice and you will give her a car. If she obtains from 75% 
to 89%, and she earns more than R5 000 during the December holidays, she can also 
go the university of her choice and you will give her a car. If she obtains more 
than 74% but does not earn enough money, she can study at the university of her 
choice, but you will not give her a car. If she obtains less than 75%, but more 
than 59%, she must study at the nearest university. With less than 60% she cannot 
go to university and will have to consider other alternatives.
Write a program to read in your daughter’s average mark, and the amount that she 
earned in her holiday job, and display a message indicating which university she 
may attend.
The program must use a switch statement.
*/
#include <iostream>
using namespace std;

int main() {
    int mark;
    double earnings;

    cout << "Enter your average mark (%): ";
    cin >> mark;
    cout << "Enter the amount you earned during the December holidays (R): ";
    cin >> earnings;

    // Determine the category based on the mark
    int category;
    if (mark >= 90) {
        category = 1; // High achiever
    } else if (mark >= 75) {
        category = 2; // Middle achiever
    } else if (mark >= 60) {
        category = 3; // Lower achiever
    } else {
        category = 4; // Non-university
    }

    switch (category) {
        case 1:
            cout << "You can attend any university of your choice and will receive a car." << endl;
            break;
        case 2:
            if (earnings > 5000) {
                cout << "You can attend any university of your choice and will receive a car." << endl;
            } else {
                cout << "You can attend any university of your choice, but will not receive a car." << endl;
            }
            break;
        case 3:
            cout << "You must attend the nearest university." << endl;
            break;
        case 4:
            cout << "You cannot attend university and should consider other alternatives." << endl;
            break;
        default:
            cout << "Invalid category." << endl;
    }

    return 0;
}
