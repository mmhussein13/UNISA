/*
What will the output of the following program be? Explain your answer.

EXPLANATION!
This is a global variable i initialized to 23
Inside main, a local variable i is declared and initialized to 5.

This hides (or shadows) the global variable i. So, from now on, within main, we are 
working with the local i = 5.
Inside the while loop, yet another i is declared: int i = j * j;.

This 'i' exists only inside the loop block, i.e., it’s a new variable scoped locally to 
the block { ... } of the loop.

Each iteration creates a new temporary 'i', assigns it a value (j*j), and then it's 
discarded when the iteration ends.

This loop has no effect on the 'i' declared in main.

This prints the i declared in main(), which still holds the value 5 because it 
wasn’t modified in the loop.
*/
// Variable scope
#include <iostream>
using namespace std;

int i = 23;

int main() {
    int i = 5;
    int j = 10;
    
    while (j > 0)
    {
        int i = j * j;
        j--;
    }
    cout << "The value of i is " << i << endl;

    return 0;
}