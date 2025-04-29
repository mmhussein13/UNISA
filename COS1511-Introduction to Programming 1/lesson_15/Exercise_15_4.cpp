/*
Write a program using a while loop to display the words of the following song:
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
#include <string>

using namespace std;

int main() {
    int num = 10;

    while (num > 0) {
        cout << "There were " << num << " in the bed" << endl;
        cout << "And the little one said:" << endl;

        if (num > 1) {
            cout << "\"Roll over, roll over!\"" << endl;
            cout << "So they all rolled over," << endl;
            cout << "And one fell out," << endl;
        } else {
            cout << "\"Good night!\"" << endl;
        }

        num--;
    }

    return 0;
}
