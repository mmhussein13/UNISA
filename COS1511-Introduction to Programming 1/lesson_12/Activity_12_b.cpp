/*
Vertebrates (i.e. animals with backbones) can be divided into five main categories, 
namely mammals, birds, reptiles, amphibians and fish.
Write a program to classify any vertebrate into one of these five categories by 
asking the user the minimum number of questions.
For example, say the user wants to determine what category a snake belongs to. 
Without asking the user what animal he/she is thinking of, the program could ask 
whether the animal is warm-blooded. After the user enters ’N’ for No, the program 
could ask whether it ever breathes through gills in its life. When the user 
enters ’N’ for No, the program can announce that the animal is a reptile.
Of course, the questions used to split the categories have to be chosen carefully. 
Consider trying to distinguish birds from mammals. It is no use asking whether the animal can fly, because some birds (like penguins) can’t fly and some mammals (like bats) can. Even asking whether it lays eggs is not good enough, because the Duck-billed Platypus lays eggs, and it is classified as a mammal. In fact, the best question to distinguish between a bird and a mammal is whether it suckles its young.
*/
#include <iostream>
using namespace std;

int main() {
    char response;

    // Question 1: Warm-blooded?
    cout << "Is the animal warm-blooded? (Y/N): ";
    cin >> response;
    response = toupper(response);

    if (response == 'Y') {
        // Question 2: Suckles young?
        cout << "Does it suckle its young? (Y/N): ";
        cin >> response;
        response = toupper(response);

        if (response == 'Y') {
            cout << "Classification: Mammal" << endl;
        } else {
            cout << "Classification: Bird" << endl;
        }
    } else {
        // Question 2: Has scales?
        cout << "Does the animal have scales? (Y/N): ";
        cin >> response;
        response = toupper(response);

        if (response == 'Y') {
            // Question 3: Uses gills?
            cout << "Does it breathe with gills? (Y/N): ";
            cin >> response;
            response = toupper(response);

            if (response == 'Y') {
                cout << "Classification: Fish" << endl;
            } else {
                cout << "Classification: Reptile" << endl;
            }
        } else {
            cout << "Classification: Amphibian" << endl;
        }
    }

    return 0;
}
