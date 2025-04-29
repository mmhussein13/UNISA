/*
What will be displayed by the following program segment?
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j < i; j++) {
            cout << j;
        }
        cout << endl;
    }
}