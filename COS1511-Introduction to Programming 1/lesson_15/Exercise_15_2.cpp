/*
Write a program that uses a for loop to display all the characters with ASCII values 
from 32 to 255 on the screen.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Characters with ASCII values from 32 to 255:\n\n";

    for (int i = 32; i <= 255; ++i) {
        cout << i << " : " << static_cast<char>(i) << " \n";

        // Just to make it look nice: after every 20 characters, start a new line
        if ((i - 31) % 20 == 0) {
            cout << endl;
        }
    }

    return 0;
}

