/*
Write a program that simulates the following game:
A coin is tossed repeatedly until the  rst head appears. Suppose it takes N tosses to get the  rst head. A
payo  of R2N is then made. For example: Tail, Tail, Head pays R8.00, that is 23, since there were 3 tosses.
The program should play the game repeatedly. It starts by asking the user how many times the game will be
played. The tosses of the coin should be entered from the keyboard: H for \heads" and T for \tails". When
a game is over, the program should calculate the payo  for the game and display it. When all the games
have been played, the program should calculate and display the average of the payo s for all the games.
*/
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
#include <limits>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int numGames;
    cout << "Enter the number of games to play: ";
    cin >> numGames;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume newline

    vector<double> payoffs;

    for (int game = 1; game <= numGames; ++game) {
        cout << "\nGame " << game << ":\n";
        int numTosses = 0;
        char toss;
        double payoff = 0.0;
        bool headFound = false;

        while (!headFound) {
            cout << "Enter toss (H/T): ";
            cin >> toss;
            toss = toupper(toss);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (toss == 'H') {
                headFound = true;
                numTosses++;
                payoff = pow(2, numTosses);  // R2^N
                cout << "Payoff for this game: R" << fixed << setprecision(2) << payoff << endl;
                payoffs.push_back(payoff);
            } else if (toss == 'T') {
                numTosses++;
            } else {
                cout << "Invalid input. Please enter 'H' or 'T'.\n";
            }
        }
    }

    // Calculate and display the average payoff
    double totalPayoff = 0.0;
    for (double payoff : payoffs) {
        totalPayoff += payoff;
    }

    double averagePayoff = (numGames > 0) ? totalPayoff / numGames : 0.0;
    cout << "\nAverage payoff for all games: R" << fixed << setprecision(2) << averagePayoff << endl;

    return 0;
}
