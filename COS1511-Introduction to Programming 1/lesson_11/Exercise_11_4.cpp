/*
Write a program to give the user 10 chances to guess a number between 1 and 100.
If the user guesses the number correctly in 10 or less tries (say 7), the program 
should display the message:
    Well done! You got the number in 7 guesses.
Otherwise, the program should display the message:
Tough luck! Your 10 chances are over.
The program must contain a constant called SECRET (of type integer) to hold the 
number that the user must
try to guess. (You can choose any value for SECRET, say 23.)
Furthermore, the program must use a boolean variable called found which is set to 
true as soon as the user guesses the number correctly.
*/
#include <iostream>
#include <random>
using namespace std;

int main() {
    // Generate a random secret number between 1 and 100
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 100);
    const int SECRET = dis(gen);  // Randomized secret number

    bool found = false;     // Flag to track if the number was found
    int guess;
    int attempts = 0;       // Track number of attempts made

    cout << "Guess the secret number between 1-100. You have 10 attempts." << endl;

    for (int i = 1; i <= 10 && !found; i++) {
        cout << "Attempt " << i << ": Enter your guess: ";
        cin >> guess;
        attempts = i;  // Track current attempt number

        if (guess == SECRET) {
            found = true;
        } else if (guess < SECRET) {
            cout << "Too low! ";
        } else {
            cout << "Too high! ";
        }

        // Only show "try again" message if not found and not last attempt
        if (!found && i < 10) {
            cout << "Try again." << endl;
        }
    }

    if (found) {
        cout << "\nWell done! You got the number in " << attempts << " guesses." << endl;
    } else {
        cout << "\nTough luck! Your 10 chances are over. The secret was " << SECRET << "." << endl;
    }

    return 0;
}
