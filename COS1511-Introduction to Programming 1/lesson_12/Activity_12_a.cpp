/*
A certain restaurant pays its waitrons (waiters and waitresses) by the hour. 
They are paid R32.50 an hour in the afternoon (between 1 and 6 o’clock) and R44 in 
the evening (between 6 and 12 o’clock). Shifts always change on the hour.
Write a program that reads in the starting and finishing times of a waitron and 
calculates the wage for the work done.
An example of the user dialogue would be:

    Wage calculation
    ================
    Starting time: 5
    Finishing time: 8
    The payment is R 120.50

For this program you need nested if statements, i.e. if statements within other if 
statements. Although it is quite tricky, you might like to try to write this program 
before you tackle the subactivities below. If you can write the program without any 
problem, you can jump to Activity 12.b. If you feel unsure about your answer or 
don’t know where to start, work through the following subactivities.
*/
#include <iostream>
using namespace std;

int main() {
    const double AFTERNOON_RATE = 32.50; // Pay rate from 1 PM to 6 PM
    const double EVENING_RATE = 44.00;   // Pay rate from 6 PM to 12 AM

    int startTime, endTime;
    double totalPay = 0.0;

    cout << "Wage Calculation" << endl;
    cout << "================" << endl;
    
    // Get user input
    cout << "Starting time (1-12): ";
    cin >> startTime;
    cout << "Finishing time (1-12): ";
    cin >> endTime;

    // Validate input times
    if (startTime < 1 || startTime > 12 || endTime < 1 || endTime > 12) {
        cout << "Invalid input! Please enter times between 1 and 12." << endl;
        return 1;
    }
    
    if (endTime <= startTime) {
        cout << "Invalid input! Finishing time must be after starting time." << endl;
        return 1;
    }

    // Calculate the payment
    for (int hour = startTime; hour < endTime; hour++) {
        if (hour >= 1 && hour < 6) {
            totalPay += AFTERNOON_RATE; // Afternoon rate applies
        } else {
            totalPay += EVENING_RATE;   // Evening rate applies
        }
    }

    // Display the result
    cout << "The payment is R " << totalPay << endl;

    return 0;
}
