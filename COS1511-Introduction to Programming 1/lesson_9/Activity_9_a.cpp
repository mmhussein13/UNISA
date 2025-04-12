    /*
    Calculates VAT on three prices
#include <iostream>
using namespace std;

int main( ) {
    const float VAT_RATE = 0.14;
    float price1, price2, price3, total, vat, vatIncl;

    cout << "Enter the prices of three items" << endl;
    cin >> price1 >> price2 >> price3;

    total = price1 + price2 + price3;
    vat = total * VAT_RATE;
    vatIncl = total + vat;

    cout << endl;
    cout << "The total price is " << vatIncl << endl;

    return 0; 
}
*/

#include <iostream>
using namespace std;

int main() {
    const float VAT_RATE = 0.14;
    float price, total = 0.0, vat, vatIncl;

    cout << "Enter the prices of items. Enter 0.00 when finished." << endl;

    while (true) {
        cout << "Enter price: ";
        cin >> price;

        if (price == 0.00) {
            break; 
        }

        total += price; // Add the price to the total
    }

    vat = total * VAT_RATE;
    vatIncl = total + vat;

    cout << endl;
    cout << "The total price is R" << vatIncl << endl;

    return 0;
}
