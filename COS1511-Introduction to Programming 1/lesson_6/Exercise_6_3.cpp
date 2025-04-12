/*
The following program does not do anything meaningful; it merely illustrates 
the use of integer and floating point numbers:
(i) State where implicit and explicit type conversions take place.
(ii) What will the values of variables result and answer be at the end of the 
program if 13 and 5 are input for w and x?
*/
#include <iostream>
using namespace std;

int main() {
    int w, x;
    float y, result, answer;

    cout << "Enter two integers: " << endl;
    cin >> w >> x;

    y = w / x; // Since both w and x are integers, integer division is performed before assigning the result to y (which is a float).
    result = w - y;
    y = float(w + x); // Here, w + x is an integer sum, but float(w + x) explicitly casts it to float before assigning it to y.
    answer = int(y / x); //Here, y / x is implicitly converted to float before performing the division.

    return 0;
}
