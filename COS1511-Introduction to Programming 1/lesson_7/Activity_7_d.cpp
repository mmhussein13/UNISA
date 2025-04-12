#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    float kms, litres, km_per_litre, l_per_100km;

    // Input the values
    cout << "Enter the number of kilometers: ";
    cin >> kms;
    cout << "Enter the number of litres: ";
    cin >> litres;

    // Calculate fuel consumption
    km_per_litre = kms / litres;
    l_per_100km = (litres / kms) * 100;

    // Display results in tabular form
    cout.setf(ios::fixed);
    cout.precision(5);
    cout << "kms\t\tlitres\t\tkm/l\t\tl/100km\n";
    cout << kms << "\t" << litres << "\t" << km_per_litre << "\t" << l_per_100km << endl;

    return 0;
}
