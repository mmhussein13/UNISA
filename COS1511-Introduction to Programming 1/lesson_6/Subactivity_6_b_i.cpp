/*
Write the program for the main activity, but use floating point variables throughout.
*/
//Calculates the average of three marks
#include <iostream>
using namespace std;

int main( ) {
    float mark1, mark2, mark3, average;

    //Input the three marks
    cout << "Enter the values of three marks" << endl;
    cin >> mark1 >> mark2 >> mark3;

    //Calculate the average
    average = (mark1 + mark2 + mark3) / 3;
    cout << "The average is " << average << endl;

    return 0; 
}