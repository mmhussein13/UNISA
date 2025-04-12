#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    cout << "The remainder of " << number1 << " divided by " << number2 << " is " << number1 % number2 << endl;

    return 0;
}