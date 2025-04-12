/*
Write a program to allow the following interaction with the computer:
    Enter a person’s name: Peter
    Enter another person’s name: Mary
    Enter a colour: purple
    Enter a number: 13
    Enter a noun: fish
    Enter an adjective: sweet
    Dialogue
    ========
    Peter:  "Couldn’t you see that the traffic light was purple?"
    Mary:   "But I had 13 people and a fish in the car with me."
    Peter:  "That is so sweet! You could have had them all killed."
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2; // Names of two people
    string color; // Color
    int number; // Number
    string noun; // Noun
    string adjective; // Adjective

    // Input data
    cout << "Enter a person's name: ";
    cin >> name1;
    cout << "Enter another person's name: ";
    cin >> name2;
    cout << "Enter a colour: ";
    cin >> color;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a noun: ";
    cin >> noun;
    cout << "Enter an adjective: ";
    cin >> adjective;

    // Generate dialogue
    cout << "\nDialogue" << endl;
    cout << "========" << endl;
    cout << name1 << ":  \"Couldn't you see that the traffic light was " << color << "?" << endl;
    cout << name2 << ":   \"But I had " << number << " people and a " << noun << " in the car with me.\"" << endl;
    cout << name1 << ":  \"That is so " << adjective << "! You could have had them all killed.\"" << endl;

    return 0;
}
