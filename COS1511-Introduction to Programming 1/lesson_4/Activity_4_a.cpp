#include <iostream>
using namespace std;

// Function to add two time periods
void addTime(int min1, int sec1, int min2, int sec2, int &totalMin, int &totalSec) {
    totalSec = sec1 + sec2;
    totalMin = min1 + min2 + (totalSec / 60);
    totalSec = totalSec % 60;
}

int main() {
    int min1, sec1, min2, sec2;
    cout << "Enter first period (minutes seconds): ";
    cin >> min1 >> sec1;
    cout << "Enter second period (minutes seconds): ";
    cin >> min2 >> sec2;
    
    int totalMin, totalSec;
    addTime(min1, sec1, min2, sec2, totalMin, totalSec);
    
    cout << "Total time: " << totalMin << " minutes and " << totalSec << " seconds." << endl;
    
    return 0;
}