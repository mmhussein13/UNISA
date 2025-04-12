/*
Type in the following program and get it to run. See if you can get it to terminate 
normally, i.e. to display the final message. Add a prompt message to the program to help 
the user to use the program correctly.
*/
// Calculate the average of a list of integers
/*
#include <iostream>
using namespace std;

int main() {
    int value, sum, many;
    float average;
    sum = 0;
    many = 0;

    while (cin >> value) {
        sum += value;
        many++;
        cout << "The sum so far is " << sum << endl;
    }

    average = float(sum) / many;
    cout << "The average is " << average << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    int value, sum, many;
    float average;
    sum = 0;
    many = 0;

    // Prompt message for the user
    cout << "Enter a list of integers (press Ctrl+D to finish on Linux/Mac or Ctrl+Z on Windows):" << endl;

    // Loop to read integers until EOF is encountered
    while (cin >> value) {
        sum += value; // Add value to sum
        many++;       // Increment count of numbers entered
        cout << "The sum so far is " << sum << endl; // Display running total
    }

    // Check if any numbers were entered to avoid division by zero
    if (many > 0) {
        average = float(sum) / many; // Calculate average
        cout << "The average is " << average << endl; // Display average
    } else {
        cout << "No numbers were entered. Cannot calculate an average." << endl;
    }

    return 0;
}
