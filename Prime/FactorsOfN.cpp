#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prime_factors;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    for (auto &factor : prime_factors)
    {
        cout << factor << " ";
    }
}