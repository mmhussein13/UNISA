/*
Write a program to perform the following interaction with the user:
COS1511/1
    Computer punishment
-------------------
Repetitions? 10000
    Message? I will not drive humans crazy again!
    I will not drive humans crazy again!
    I will not drive humans crazy again!
    I will not drive humans crazy again!
    :
    I will not drive humans crazy again!
The message should be displayed as many times as requested by the user; in this 
case, 10000.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int repetitions; 
    string message; 

    // Display header
    cout << "COS1511/1\n";
    cout << "Computer punishment\n";
    cout << "-------------------\n";

    // Input data
    cout << "Repetitions? ";
    cin >> repetitions;
    cout << "Message? ";
    cin.ignore(); // Ignore newline character left in input buffer
    getline(cin, message);

    // Display message repeatedly
    for (int i = 0; i < repetitions; i++) {
        cout << message << endl;
    }

    return 0;
}
