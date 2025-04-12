/*
Now, write a while loop that displays each of the integers from 1 to 5, together with its square, on
a separate line. Assume that variables x and xSq are declared as integers.
*/
#include <iostream>
using namespace std;

int main() {
    int x = 1;
while (x <= 5) {
    int xSq = x * x;
    cout << x << " squared is " << xSq << endl;
    x++;
    }
    return 0;
}
