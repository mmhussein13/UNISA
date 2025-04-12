/*
Write a program to perform a “spoonerism”. A spoonerism is where the first 
letters of two words are swapped around. For example, the spoonerism of Cold 
Blue is Bold Clue. The program must input two words and output their spoonerism.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word1, word2; // Input words

    // Input two words
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;

    // Check if both words are not empty
    if (!word1.empty() && !word2.empty()) {
        // Perform spoonerism
        char temp = word1[0];
        word1[0] = word2[0];
        word2[0] = temp;

        // Display the spoonerism
        cout << "The spoonerism is: " << word1 << " " << word2 << endl;
    } else {
        cout << "Please enter two non-empty words." << endl;
    }

    return 0;
}
