/*
What is the output of the following program fragment?
*/
#include <iostream>
using namespace std;

int main() {
    int j = 5;
    for (int i = 1; i <= j; i++) {
        cout << j << ' ';
        j--;
    }
}