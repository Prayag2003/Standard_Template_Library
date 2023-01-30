#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Finding factors in O(sqrt(N))
    vector<int> prime_factors;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        prime_factors.push_back(n);
    }
    for (auto &factors : prime_factors)
    {
        cout << factors << " ";
    }
}