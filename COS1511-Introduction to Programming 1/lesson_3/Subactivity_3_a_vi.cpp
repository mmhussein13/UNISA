#include <iostream>
using namespace std;

int main()
{
    int momsAge, yourAge;
    cout << "Enter your mom's age and your age: ";
    cin >> momsAge >> yourAge;
    cout << "Your mom was " << momsAge - yourAge << " years old when you were born." << endl;

    return 0;

}