/*
Write a program that asks for and reads the length and width of a room in metres. 
It then calculates and displays the area of the room with an appropriate heading. 
The output must be given in fixed-point notation, with three digits after the 
decimal point. Test your program with different inputs and make sure it gives the 
correct output.
*/
#include <iostream>
using namespace std;

int main() {
    float length, width, area;

    cout << "Enter the length of the room (meters): ";
    cin >> length;

    cout << "Enter the width of the room (meters): ";
    cin >> width;

    cout.setf(ios::fixed);
    cout.precision(3);
    area = length * width;

    cout << "The area of the room is: " << area << " square meters" << endl;

    return 0;

}