//Determine postal tariff given dimensions of a letter
#include <iostream>
using namespace std;
int main( ) {
    int length, width, thickness;
    float rate;
    cout << "Enter the length of the envelope: ";
    cin >> length;
    cout << "Enter the width of the envelope: ";
    cin >> width;
    cout << "Enter the thickness of the envelope: ";
    cin >> thickness;
    if (length <= 235 && width <= 120 && thickness <= 5)
        rate = 2.50;
    else if (length <= 250 && width <= 176 && thickness <= 10)
        rate = 5.00;
    else if (length <= 353 && width <= 250 && thickness <= 30)
        rate = 6.25;
    else
        rate = -1;
    if (rate != -1)
        cout << "The postal rate is R" << rate << endl;
    else
        cout << "Too large - regard as parcel" << endl;

    return 0; 
}