/*
The while loop below determines the biggest of a number of positive integers. The input 
list ends with 0 or any negative number. Rewrite the code so that it uses a do..while loop.
*/
#include <iostream>
using namespace std;

int main() {
    int number, maxNum;

    cout << "Enter a list of positive integers (end with 0 or a negative number):" << endl;

    cin >> number;
    maxNum = number;

    do {
        if (number > maxNum) {
            maxNum = number;
        }
        cin >> number;
    } while (number > 0);

    if (maxNum > 0) {
        cout << "The largest number is: " << maxNum << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }

    return 0;
}
