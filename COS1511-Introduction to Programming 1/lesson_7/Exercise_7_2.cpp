/*
Write a program that works out which letter of the alphabet a given upper case 
represents. The user interface should look as follows:
*/
#include <iostream>
using namespace std;

int main() {
    char letter;
    
    cout << "Enter an upper case letter: ";
    cin >> letter;

    // Calculate the position in the alphabet
    int position = letter - 'A' + 1;

    cout << letter << " is in position " << position << " in the alphabet" << endl;

    return 0;
}
