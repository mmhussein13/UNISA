/*
Write a program to input a person’s title, first name and surname and output 
the full name in the form Surname, Title, FirstName.
*/
#include <iostream>
#include <string>  // Required for string operations

using namespace std;

int main() {
    string title, firstName, surname;

    // Get user input
    cout << "Enter your title (e.g., Mr, Ms, Dr): ";
    getline(cin, title);

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your surname: ";
    getline(cin, surname);

    // Display output in the required format
    cout << surname << ", " << title << ", " << firstName << endl;

    return 0;
}
