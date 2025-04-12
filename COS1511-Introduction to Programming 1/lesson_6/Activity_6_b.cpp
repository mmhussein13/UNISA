/*
Write a program to calculate the average of three marks. The marks must be input into 
three integer variables but the average that is output must be a floating point number.
*/
#include <iostream>

using namespace std;

int main() {
    int mark1, mark2, mark3;
    float average;

    cout << "Enter three marks: ";
    cin >> mark1 >> mark2 >> mark3;

    // Calculate the average (convert sum to float to avoid integer division)
    average = (mark1 + mark2 + mark3) / 3.0;

    // Display the result
    cout << "The average is: " << average << endl;

    return 0;
}
