#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << "\n";
}

int main()
{
    // Checking if the bit is set or  not
    printBinary(8);
    int a = 10;
    int i = 3;
    if ((a && (1 << i)) != 0)
    {
        cout << "Set Bit\n";
    }
    else
        cout << "Not Set Bit\n";

    // To set the ith Bit
    printBinary(a | (1 << 1));
}