/*
The Department of Security Services wants to identify single young people with 
ages from 18 to 26 years who have passed matric. Using two boolean variables 
single and matric, and an integer variable age, write an if statement to determine 
whether a person is a suitable candidate and display an appropriate message.
*/
#include <iostream>
using namespace std;

int main() {
    bool single, matric;
    int age, input;

    cout << "Enter your age: ";
    cin >> age;

    // Prompt for single status
    while (true) {
        cout << "Are you single? (Enter 1 for yes and 0 fo no): ";
        cin >> input;

        if (input == 1) {
            single = true;
            break;
        } else if (input == 0) {
            single = false;
            break;
        } else {
            cout << "Invalid input. Please enter 1 for \'yes\' or 0 for \'no\': " << endl; 
        }
    }

    // Prompt for matric results
    while (true) {
        cout << "Have you passed matric? (1 for \'yes\', 0 for \'no\'): ";
        cin >> input;

        if (input == 1) {
            matric = true;
            break;
        } else if (input == 0) {
            matric = false;
            break;
        } else {
            cout << "Invalid input. Please enter 1 for \'yes\' or 0 for \'no\': " << endl;
        }
    }

    if (age >= 18 && age <= 26 && single && matric) {
        cout << "You are a suitable candidate." << endl;
    } else {
        cout << "You are not a suitable candidate." << endl;
    }

    return 0;
}
