/*
Write a program that calculates and displays the sums of all the odd numbers up to a 
number n. The user must supply a value for n, and the program must display all the partial 
sums up to n (including n if n is odd).
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Partial sums of odd numbers up to " << n << ":\n";

    for (int i = 1; i <= n; i += 2) {
        sum += i;
        cout << "Sum up to " << i << " = " << sum << endl;
    }

    return 0;
}
