/*
Now change the declarations of the variables used to store the marks to ints and 
test the program again. Explain the output.
*/
//Calculates the average of three marks
#include <iostream>
using namespace std;

int main( ) {
    int mark1, mark2, mark3, average;

    //Input the three marks
    cout << "Enter the values of three marks" << endl;
    cin >> mark1 >> mark2 >> mark3;

    //Calculate the average
    average = (mark1 + mark2 + mark3) / 3;
    cout << "The average is " << average << endl;

    return 0; 
}