/*
Write a program that inputs the length and width of a room. It then checks 
whether 100 square metres of carpet will be enough to cover the floor of the 
room. If it is enough, display a message that reports this; otherwise display 
the size of the area that will not be covered.
*/
#include <iostream>
using namespace std;

int main() {
    // Input the dimensions of the room
    double length, width;
    cout << "Enter the length of the room (in meters): ";
    cin >> length;
    cout << "Enter the width of the room (in meters): ";
    cin >> width;

    // Calculate the area of the room
    double roomArea = length * width;

    // Check if the carpet is enough
    const double CARPET_AREA = 100.0; // Square meters
    cout.setf(ios::fixed);
    cout.precision(2);
    if (roomArea <= CARPET_AREA) {
        cout << "The carpet is enough to cover the entire room." << endl;
    } else {
        double uncoveredArea = roomArea - CARPET_AREA;
        cout << "The carpet will not cover " << uncoveredArea << " square meters of the room." << endl;
    }

    return 0;
}
