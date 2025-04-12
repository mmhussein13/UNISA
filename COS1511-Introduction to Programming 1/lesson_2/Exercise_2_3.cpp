#include <iostream>

using namespace std;

int main() {
    int dividend = 234;
    int divisor = 13;

  // Calculate the quotient using integer division.
    int quotient = dividend / divisor;

  // Multiply the quotient by the divisor.
  int product = quotient * divisor;

  // Calculate the remainder.
    int remainder = dividend - product;

  // Display the result.
    cout << "The remainder of " << dividend << " divided by " << divisor << " is: " << remainder << endl;

    return 0;
}
