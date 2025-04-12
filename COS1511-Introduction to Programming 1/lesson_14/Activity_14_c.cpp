/*
Write a while loop that inputs the monthly rainfall figures for a year, and calculates 
and displays the total rainfall (in millimetres) for the year.
*/
#include <iostream>
using namespace std;

int main() {
    const int MONTHS_IN_YEAR = 12;
    int month = 1;
    double totalRainfall = 0.0;

    while (month <= MONTHS_IN_YEAR) {
        double rainfall;
        
        cout << "Enter rainfall for month " << month << ": ";
        cin >> rainfall;

        // Validate input to ensure it's non-negative
        while (rainfall < 0) {
            cout << "Rainfall cannot be negative. Please enter again: ";
            cin >> rainfall;
        }

        totalRainfall += rainfall;
        month++;
    }

    cout << "Total rainfall for the year: " << totalRainfall << " mm" << std::endl;

    return 0;
}
