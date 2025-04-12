#include <iostream>
#include <limits> // For input validation
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return 5.0 * (fahrenheit - 32) / 9;
}

int main() {
    double fahrenheit;
    char choice;
    
    do {
        cout << "Enter oven temperature in Fahrenheit: ";
        while (!(cin >> fahrenheit)) {  // Validate input
            cout << "Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        double celsius = fahrenheitToCelsius(fahrenheit);
        cout << "Equivalent temperature in Celsius: " << fixed << celsius << " C" << endl;
        
        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Goodbye!" << endl;
    return 0;
}
