/*
Remove variable sum and this time replace the assignment statement with 
average = float(mark1 + mark2 + mark3) / 3;
*/
//Calculates the average of three marks
#include <iostream>
using namespace std;
int main( ) {
    int mark1, mark2, mark3;
    float average;

    //Input the three marks
    cout << "Enter the values of three marks" << endl;
    cin >> mark1 >> mark2 >> mark3;

    //Calculate the sum and average
    average = float(mark1 + mark2 + mark3) / 3;
    cout << "The average is " << average << endl;

    return 0;
}