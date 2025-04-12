/*
Write a program that asks for and inputs an employee’s yearly salary, and then 
calculates and displays the income tax payable on the salary. If the salary 
exceeds R 70 000.00 per year, the tax rate is 40%, otherwise it is 30%.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary; 
    float taxRate; 
    double taxPayable; 

    // Input salary
    cout << "Enter the employee's yearly salary: R ";
    cin >> salary;

    // Determine tax rate
    taxRate = (salary > 70000.0) ? 0.40 : 0.30;

    // Calculate tax payable
    taxPayable = salary * taxRate;

    // Display tax payable
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The income tax payable is: R " << taxPayable << endl;

    return 0;
}
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary; 
    double taxRate; 
    double taxPayable;

    // Input salary
    cout << "Enter the employee's yearly salary: R ";
    cin >> salary;

    // Determine tax rate
    if (salary > 70000.0) {
        taxRate = 0.40;
    } else {
        taxRate = 0.30;
    }

    // Calculate tax payable
    taxPayable = salary * taxRate;

    // Set locale to include thousands separators
    locale loc("");
    cout.imbue(loc);

    // Display tax payable
    cout << fixed << setprecision(2);
    cout << "The income tax payable is: R " << taxPayable << endl;

    return 0;
}

