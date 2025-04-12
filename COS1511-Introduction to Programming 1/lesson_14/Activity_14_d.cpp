/*
The number of people that live in a city increases by 10% every year. Write a program 
that inputs a value for the current population, and then uses a while loop to determine 
how many years it will take before the population exceeds 1 000 000.
*/
#include <iostream>
using namespace std;

int main() {
    double currentPopulation;
    int years = 0;

    cout << "Enter the current population: ";
    cin >> currentPopulation;

    // Validate input to ensure it's positive
    while (currentPopulation <= 0) {
        cout << "Population must be positive. Please enter again: ";
        cin >> currentPopulation;
    }

    while (currentPopulation <= 1000000) {
        currentPopulation *= 1.10; // Increase by 10%
        years++;
    }

    cout << "It will take " << years << " years for the population to exceed 1,000,000." 
    << endl;
    
    return 0;
}
