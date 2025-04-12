/*
Write an if statement that enacts the following logic: ‘If balance is greater 
than or equal to zero, display the word “Credit” on the screen; otherwise display 
the word “Debit”’.
*/
#include <iostream>
using namespace std;

int main() {
    double balance = 1;

    if (balance >= 0) {
        cout << "Credit" << endl;
    } else {
        cout << "Debit" << endl;
    }
    
}