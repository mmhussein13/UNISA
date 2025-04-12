/*
The maximum mass of luggage allowed on a certain kind of airplane is 10 000.00 kg. 
Write a program that inputs the mass of each item of luggage and decides whether 
the total mass exceeds the maximum load that the airplane can take.
*/
#include <iostream>
using namespace std;

int main() {
    const double MAX_LOAD = 10000.0; // Maximum load in kg
    double totalMass = 0.0; // Total mass of luggage

    cout << "Enter the mass of each item of luggage (in kg). Enter 0.0 when finished." << endl;

    while (true) {
        double mass;
        cout << "Enter mass: ";
        cin >> mass;

        if (mass == 0.0) {
            break; // Exit loop when 0.0 is entered
        }

        totalMass += mass; // Add mass to total

        if (totalMass > MAX_LOAD) {
            cout << "Warning: Total mass exceeds the maximum load of " << MAX_LOAD << " kg." << endl;
            break; // Exit loop if maximum load is exceeded
        }
    }

    if (totalMass <= MAX_LOAD) {
        cout << "Total mass is within the maximum load limit." << endl;
    }

    cout << "Total mass: " << totalMass << " kg" << endl;

    return 0;
}
