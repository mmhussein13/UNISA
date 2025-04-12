/*
Write a program that inputs a list of yearly salaries and counts how many of these exceed 
R 100 000. The number of salaries in the list is not known and there is no sentinel that 
indicates the end of the list. The program should repeatedly ask the user whether there 
are more values to be input. A message should eventually be displayed that indicates 
what percentage of the salaries entered is higher than R100 000. Use a do..while loop in 
the program.
*/
#include <iostream>
using namespace std;

int main() {
    double salary;
    int totalSalaries = 0;
    int highSalaries = 0;
    char moreValues;

    do {
        cout << "Enter a yearly salary: ";
        cin >> salary;

        totalSalaries++; // Increment total salaries count

        if (salary > 100000) {
            highSalaries++; // Increment high salaries count
        }

        cout << "Are there more values to input? (y/n): ";
        cin >> moreValues;

        // Validate input to ensure it's either 'y' or 'n'
        while (moreValues != 'y' && moreValues != 'n' && moreValues != 'Y' && moreValues != 'N') {
            cout << "Invalid input. Please enter 'y' for yes or 'n' for no: ";
            cin >> moreValues;
        }
    } while (moreValues == 'y' || moreValues == 'Y');

    // Calculate and display percentage of high salaries
    if (totalSalaries > 0) {
        double percentage = (static_cast<double>(highSalaries) / totalSalaries) * 100;
        cout << "Percentage of salaries exceeding R100,000: " << percentage << "%" << endl;
    } else {
        cout << "No salaries were entered." << endl;
    }

    return 0;
}
