/*
Fix the above program to work properly even if zero is entered for the first 
number. Nest the current if statement in another if statement that first tests 
whether x != 0. Note that 0 is not a factor of y, no matter what the value of y is

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (y % x == 0) {
        cout << x << " is a factor of " << y << endl;
    } else {
        cout << x << " is not a factor of " << y << endl;
    }
    return 0;
}
    */

    #include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (x != 0) {
        if (y % x == 0) {
            cout << x << " is a factor of " << y << endl;
        } else {
            cout << x << " is not a factor of " << y << endl;
        }
    } else {
        cout << "0 is not a factor of " << y << endl;
    }
    return 0;
}
