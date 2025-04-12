/*
Consider the following program for testing whether a number is a prime number:
This program works correctly if a prime number is entered. However, if a non-prime 
number like 12 is entered, the message 12 is not prime is displayed over and over, 
as well as the message 12 is prime.
Fix these problems and hence make the above program more efficient by introducing a 
boolean variable.

//Test whether a number is prime
#include <iostream>
using namespace std;
int main( ) {
    int x, y;
    cout << "Enter a positive integer: ";
    cin >> y;
    x = 2;
    while (x != y)
    {
        //test if x is a factor of y
        if (y % x == 0)
            cout << y << " is not prime" << endl;
        x++;
    }
    if (x == y)
        cout << y << " is prime!" << endl;
    return 0; 
}
*/
// Test whether a number is prime
#include <iostream>
using namespace std;

int main() {
    int y;
    bool isPrime = true; // Assume the number is prime until proven otherwise

    cout << "Enter a positive integer: ";
    cin >> y;

    if (y <= 1) {
        isPrime = false; // 1 and numbers less than 1 are not prime
    } else {
        int x = 2;
        while (x * x <= y) { // Only need to check up to the square root of y
            if (y % x == 0) {
                isPrime = false; // If a factor is found, it's not prime
                break; // No need to check further factors
            }
            x++;
        }
    }

    if (isPrime) {
        cout << y << " is prime!" << endl;
    } else {
        cout << y << " is not prime" << endl;
    }

    return 0;
}
