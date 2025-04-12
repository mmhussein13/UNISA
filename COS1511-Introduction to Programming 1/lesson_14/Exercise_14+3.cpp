/*
Write a program to display the words of the following song:
    There were 10 in the bed
    And the little one said:
    "Roll over, roll over!"
    So they all rolled over,
    And one fell out,
    There were 9 in the bed
    And the little one said:
    :
    :
    There was 1 in the bed
    And the little one said:
    "Good night!"
Use a while loop.
*/
#include <iostream>
using namespace std;

int main() {
    int peopleInBed = 10;

    while (peopleInBed > 0) {
        cout << "There were " << peopleInBed << " in the bed" << endl;
        cout << "And the little one said:" << endl;

        if (peopleInBed > 1) {
            cout << "\"Roll over, roll over!\"" << endl;
            cout << "So they all rolled over," << endl;
            cout << "And one fell out," << endl;
        } else {
            cout << "\"Good night!\"" << endl;
        }

        peopleInBed--; // Reduce the number of people in the bed

        if (peopleInBed > 0) {
            cout << "There were " << peopleInBed << " in the bed" << endl << endl;
        }
    }

    return 0;
}
