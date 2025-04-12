//Adds two times (specified as minutes and seconds) FIRST ATTEMPT
#include <iostream>
using namespace std;

int main() {
    int mins1, mins2, secs1, secs2; 
    cout << "(Specify only minutes and seconds, separated by spaces)" << endl;
    cout << "Enter a period of time: ";
    cin >> mins1 >> secs1;
    cout << "Enter another one: ";
    cin >> mins2 >> secs2;
    cout << "The total time is " << mins1 + mins2 << " minutes";
    cout << " and " << secs1 + secs2 << " seconds" << endl;

    return 0;
}