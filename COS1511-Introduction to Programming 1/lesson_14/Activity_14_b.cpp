#include <iostream>
using namespace std;

int main() {
    int x = 3;
int count = 0;
while (count < 3)
{
   x = x * x;
    cout << x << endl;
    count++;
}
cout << count << endl;

return 0;
}