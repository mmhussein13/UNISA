/*
Write a program that maintains a simple cheque account. It first asks for a balance and 
then for a sequence of transactions. Deposits are given as positive values and cheques 
written as negative values. After each transaction, the program should display the new 
balance. The transactions end when the value 0 is entered.
*/
#include <iostream>
using namespace std;

int main() {
    double balance, transaction;

    // Prompt user for the initial balance
    cout << "Enter the initial balance: ";
    cin >> balance;

    // Process transactions until a transaction of 0 is entered
    do {
        cout << "Enter a transaction (positive for deposit, negative for cheque, 0 to end): ";
        cin >> transaction;

        if (transaction != 0) {
            // Update balance
            balance += transaction;

            // Display new balance
            cout << "New balance: " << balance << endl;

            // Check if balance is negative
            if (balance < 0) {
                cout << "Account is overdrawn." << endl;
            }
        }
    } while (transaction != 0);

    cout << "Transaction processing ended." << endl;

    return 0;
}
