#include <iostream>
using namespace std;

int main()
{
    int number1, number2, quotient;

    cout << "Enter two numbers: " << endl;
    cin >> number1 >> number2;

    quotient = number1 / number2;

    cout << "The quotient of " << number1 << " and " << number2 << " is " << quotient << endl;

    return 0;
}