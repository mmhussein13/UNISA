/*
Write a program that uses a while loop to display the numbers from 10 to 20 
with a blank line after each number.
*/
#include <iostream>
using namespace std;

int main() {
    int numbers = 10;
    while(numbers <= 20 ) {
        cout << numbers << endl <<endl;
        numbers++; 
    }

    return 0;
}