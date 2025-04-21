/*
What will the output of the following two loops be?
*/
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the values of x and y";
    cin >> x >> y;
    if (x > 0) {
        x = x - 1;
        cout << x;
    } else if ( x < 0 ) {
        x = x + 1;
        cout << x;
    } else {
        x = y;
        cout << x;
    }
}