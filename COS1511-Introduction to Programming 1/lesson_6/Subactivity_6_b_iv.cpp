/*
Introduce a new variable called sum of type float. First calculate the sum and 
then divide it by 3 (not 3.0).
*/
//Calculates the average of three marks
#include <iostream>
using namespace std;
int main( ) {
    int mark1, mark2, mark3;
    float sum, average;

    //Input the three marks
    cout << "Enter the values of three marks" << endl;
    cin >> mark1 >> mark2 >> mark3;

    //Calculate the sum and average
    sum = mark1 + mark2 + mark3;
    average = sum / 3;
    cout << "The average is " << average << endl;

    return 0;
}