/*
Now try and write a nested if statement for the problem in the main activity. 
It must calculate the wage for a number of hours of work from a starting time to a 
finishing time.
The code can assume that two constants have been declared, namely AFTERNOON RATE and 
EVENING RATE.
Hint: There are three situations to consider: Both the starting and finishing times 
are before six o’clock; the starting time is before 6 o’clock but the finishing 
time is after 6 o’clock; and both the starting and finishing times are after 
6 o’clock.
The calculation of the wage for the first situation would be
   wage = (finish - start) * AFTERNOON_RATE;
*/
#include <iostream>
using namespace std;

int main() {
    const double AFTERNOON_RATE = 15.0;  // $15/hour for afternoon
    const double EVENING_RATE = 20.0;    // $20/hour for evening

    double start, finish;  // Start and finish times in 24-hour format

    // Input start and finish times
    cout << "Enter start time (24-hour format): ";
    cin >> start;
    cout << "Enter finish time (24-hour format): ";
    cin >> finish;

    double wage;

    if (start < 18) {  // Case: Start time is before 6 PM
        if (finish <= 18) {  // Both times before 6 PM
            wage = (finish - start) * AFTERNOON_RATE;
        } else {  // Starts before 6 PM, ends after 6 PM
            double afternoonHours = 18 - start;
            double eveningHours = finish - 18;
            wage = (afternoonHours * AFTERNOON_RATE) + (eveningHours * EVENING_RATE);
        }
    } else {  // Case: Start time is 6 PM or later
        // Both times after 6 PM
        wage = (finish - start) * EVENING_RATE;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout.imbue(locale("en_US.UTF-8"));
    cout << "Total wage: R" << wage << std::endl;

    return 0;
}
