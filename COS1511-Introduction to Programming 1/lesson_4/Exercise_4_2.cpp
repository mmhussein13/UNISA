#include <iostream>
using namespace std;

int main() {
    int numItems; // Number of items
    int itemsPerBox; //Numbr of items that fit in a box

    //input the number of items
    cout << "Enter the number of items: ";
    cin >> numItems;

    // Input the number of items that fit in the box
    cout << "Enter the number of items that fit in the box: ";
    cin >> itemsPerBox;

    // Calculate the number of boxes needed
    int numBoxes = numItems / itemsPerBox;

    // Calculate the number of items left over
    int leftoverItems = numItems % itemsPerBox;

    //print the result
    cout << "Number of boxes needed: " << numBoxes  << endl;
    cout << "Number of items left over: " << leftoverItems << endl;

    return 0;
}