/*
Write a program that uses a for loop to display the ASCII values of all the upper-case 
letters of the alphabet. Display each letter with its ASCII value on a separate line.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Upper-case letters and their ASCII values:\n";
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        cout << letter << " : " << int(letter) << endl;
    }
    return 0;
}
