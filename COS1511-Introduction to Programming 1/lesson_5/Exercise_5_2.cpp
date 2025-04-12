/*
Rewrite the solution to Activity 5.b using a constant (instead of variable number), 
and using compound assignment statements (as discussed in Activity 4.b) in place of 
all the standard assignment statements. Then draw a series of variable diagrams to 
indicate that your program is equivalent to the original version.
 */
#include <iostream>
using namespace std;

int main() {
    const int NUMBER = 40; // Constant replaces variable
    int answer;

    cout << "Think of a number between 30 and 50. Write it down" << endl;
    cout << "Then do the following calculations on paper: " << endl << endl;
    cin.get();

    answer *= 2; // Compound assignment replaces "answer = answer * 2"
    cout << "Add 29 to this " << endl;
    cin.get();

    answer += 29; // Compound assignment replaces "answer = answer + 29"
    cout << "Double the result again" << endl;
    cin.get();

    answer *= 2;
    cout << "Subtract the origin number from your answer " << endl;
    cin.get();

    answer -= NUMBER; // Uses constant "NUMBER" instead of variable "number"
    cout << "Divide the answer by your original number and throw away any remainder" << endl;
    cin.get();

    answer /= NUMBER;
    cout << "Your final answer is " << answer << endl;

    return 0;
}
