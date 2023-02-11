#include <iostream>
using namespace std;
int main()

// Using Left Shift , we can directly find Power Of 2.
{
    int a = INT_MAX;
    cout << a << "\n";

    int twos = 0;
    a = (1LL << 31) - 1;
    cout << "Number of 2's in INT_MAX is " << a << "\n";

    unsigned b = (1LL << 32) - 1;
    cout << b << "\n";
}