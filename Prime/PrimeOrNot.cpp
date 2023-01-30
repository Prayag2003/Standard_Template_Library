#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    // It will always check in O(sqrt(n)) since if it is not divisible by any prime factor less than it's root , that implies it is prime
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not A Prime\n";
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "Prime Number\n";
}