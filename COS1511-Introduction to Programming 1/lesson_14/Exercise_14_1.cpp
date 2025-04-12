/*
Write a program that asks the user how many people participated in a survey. It then 
inputs the height of each of the people and calculates the average height.
*/
#include <iostream>
using namespace std;

int main() {
    int numPeople;
    double height, totalHeight = 0.0;

    // Prompt user for the number of people and validate input
    do {
        cout << "Enter the number of people in the survey (must be a positive integer): ";
        cin >> numPeople;

        if (numPeople <= 0) {
            cout << "Invalid input. Please enter a positive integer." << endl;
        }
    } while (numPeople <= 0);

    int count = 1; // Counter for the number of people

    // Input heights and calculate total height
    while (count <= numPeople) {
        cout << "Enter the height of person " << count << ": ";
        cin >> height;
        totalHeight += height;
        count++;
    }

    // Calculate and display average height
    double averageHeight = totalHeight / numPeople;
    cout << "The average height is: " << averageHeight << endl;

    return 0;
}