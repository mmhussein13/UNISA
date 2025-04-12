// Write a program that inputs three values and displays them on 
// a single line in reverse order.
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Enter three numbers: " << endl;
    cin >> number1 >> number2 >> number3;
    cout << number3 << " " << number2 <<" " << number1 << endl;
    return 0;
}