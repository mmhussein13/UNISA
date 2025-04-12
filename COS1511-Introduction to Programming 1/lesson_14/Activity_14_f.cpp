/*
Lynette wants to adapt the following program so that it displays the final value of 
variable value after the while loop:
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int target;

    cout << "Enter the target: ";
    cin >> target;

    while (sum < target) {
        int value;
        cout << "Enter a value: ";
        cin >> value;
        sum += value;
    }

    if (sum == target) {
        cout << "Target reached!" << endl;
    } else {
        cout << "Target exceeded!" << endl;
    }

    return 0;
}