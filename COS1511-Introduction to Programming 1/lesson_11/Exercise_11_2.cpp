/*
There are a number of criteria for a toddler being accepted at a particular 
playschool: (i) The child must be 3, 4 or 5 years old. (ii) The parent must be 
single. (iii) The parent’s annual income must be less than R60 000. (iv) The parent 
must be 30 years or younger. Write a program to assess whether the criteria are met.
The program should contain a single if statement that uses boolean variables only 
for its condition.
*/
#include <iostream>
using namespace std;

int main() {
    int childAge, parentAge;
    double parentIncome;
    bool isParentSingle;

    // Input data with validation
    while (true) {
        cout << "Enter child's age (3-5): ";
        cin >> childAge;
        if (childAge >= 3 && childAge <= 5) {
            break;
        } else {
            cout << "Invalid age. Please enter a value between 3 and 5." << endl;
        }
    }

    while (true) {
        cout << "Is the parent single? (1 for yes, 0 for no): ";
        cin >> isParentSingle;
        if (isParentSingle == true || isParentSingle == false) {
            break;
        } else {
            cout << "Invalid input. Please enter 1 for yes or 0 for no." << endl;
        }
    }

    while (true) {
        cout << "Enter parent's annual income (ZAR): ";
        cin >> parentIncome;
        if (parentIncome >= 0) {
            break;
        } else {
            cout << "Invalid income. Please enter a non-negative value." << endl;
        }
    }

    while (true) {
        cout << "Enter parent's age: ";
        cin >> parentAge;
        if (parentAge > 0) {
            break;
        } else {
            cout << "Invalid age. Please enter a Valid Parent Age." << endl;
        }
    }

    // Create boolean flags for each condition
    bool validChildAge = (childAge >= 3 && childAge <= 5);
    bool validParentAge = (parentAge > 10 && parentAge <= 30);
    bool validIncome = (parentIncome < 60000);

    // Single if statement with combined boolean conditions
    if (validChildAge && isParentSingle && validIncome && validParentAge) {
        cout << "All criteria are met. The child is accepted!" << endl;
    } else {
        cout << "Criteria not met. The child cannot be accepted." << endl;
    }

    return 0;
}

