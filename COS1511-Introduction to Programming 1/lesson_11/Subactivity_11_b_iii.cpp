/*
We can simplify the above program by using a single if statement with a compound 
condition, namely x != 0 && y % x == 0. Make this change to get the final solution 
to the main activity.
*/
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (x != 0 && y % x == 0) {
        cout << x << " is a factor of " << y << "." << endl;
    } else {
        cout << x << " is not a factor of " << y << "." << endl;
    }
    return 0;
}