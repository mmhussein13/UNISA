/*

The South African Post Office publishes a pamphlet every now and again with revised 
postal rates. Here is an extract from the 2011 brochure with the internal postal 
rates for letters (sent by ordinary mail):
COS1511/1

category of animal is represented by the answers given. However, the program would 
then be asking more questions than it should (because some of them would be totally 
irrelevant). To keep the number of questions to a minimum, some questions are placed 
within nested if statements.
In fact, this program illustrates an important principle of programming: Although it 
is generally useful to identify the input, processing and output of any program that 
you want to write (as we did in previous lessons and in the solution to the first 
main activity in this lesson), it is not always best to keep these in watertight 
compartments in the code of the program. In this program we do not have separate 
code for input, processing and output. In fact, it would be impossible to do so. 
Input, processing and output are all combined with one another, mainly because 
further input and output depends on previous processing.
Size
235 x 120 x 5mm 250 x 176 x 10mm 353 x 250 x 30mm
Cost R2.50 R5.00 R6.25
If the dimensions of a letter exceeds any of the restrictions of a particular 
category, it falls into the next category. If it does not comply with the 
restrictions of any category, it is regarded as a parcel and its postal rate 
depends on its mass.
Write a program for your local Post Office to determine the postal rate for a letter. 
The program should read in the dimensions of a letter (length, width and thickness) 
and then display the postal rate (or a message to say that the letter must be 
regarded as a parcel).
*/
#include <iostream>
using namespace std;

int main() {
    double length, width, thickness;
    double rate = 0.0;

    cout << "Enter the length of the letter (mm): ";
    cin >> length;
    cout << "Enter the width of the letter (mm): ";
    cin >> width;
    cout << "Enter the thickness of the letter (mm): ";
    cin >> thickness;

    if (length <= 235 && width <= 120 && thickness <= 5) {
        rate = 2.50;
    } else if (length <= 250 && width <= 176 && thickness <= 10) {
        rate = 5.00;
    } else if (length <= 353 && width <= 250 && thickness <= 30) {
        rate = 6.25;
    } else {
        cout << "The letter must be regarded as a parcel." << endl;
        return 0;
    }

    cout << "The postal rate is R" << rate << endl;

    return 0;
}
