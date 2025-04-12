/*
Change the precision of the program in the previous subactivity to four. 
Hint: Insert the statement cout.precision(4); in the program.
*/
#include <iostream>
using namespace std;

int main( ) {
    float x;
    cout << "Enter a floating point number: ";
    cin >> x;

    cout.precision(4);
    cout << "The number is " << x << endl;

    return 0; 
}