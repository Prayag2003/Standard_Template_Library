#include <iostream>
#include <vector>
using namespace std;
const int n = 1e7 + 10;

vector<bool> isPrime(n, 1);
int main()
{
    isPrime[0] = isPrime[1] = 0;

    // n(1/2 + 1/3 + 1/5 + 1/7 + 1/11 ....)
    // Time Complexity of is roughly  N(log(log(N)))

    // This Loop precomputes all the numbers as prime or not from 2 to 1e7 + 10
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == 1)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        if (isPrime[n])
        {
            cout << "Prime\n";
        }
        else
            cout << "Not Prime\n";
    }
}