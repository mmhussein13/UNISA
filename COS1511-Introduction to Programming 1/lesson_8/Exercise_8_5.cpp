    /*
    Consider the following (horrible) piece of code:
    int jd; const int BANANA_FISH = 1945; const float SILLY = 20.0;
    cout << "When were you born? "; cin >> jd;
    if (jd < BANANA_FISH) cout << "Free entry";
    else cout << "Entrance fee R" << SILLY; cout << endl;
    Rewrite the code using meaningful variable names, a comment statement and 
    indentation to improve its readability.
    */
    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        // Prompt the user for their birth year and determine if they qualify for free entry
    int birthYear; 
    const int YEAR_OF_FREE_ENTRY = 1945; 
    const float ENTRANCE_FEE = 20.0;

    cout << "When were you born? ";
    cin >> birthYear;

    if (birthYear < YEAR_OF_FREE_ENTRY) {
        cout << "Free entry";
    } else {
        cout << "Entrance fee R" << ENTRANCE_FEE;
    }
    cout << endl;
}