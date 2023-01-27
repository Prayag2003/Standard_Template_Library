// Given N Strings and Q Queries.
// In each query you are given a string , print frequency of that string

// N <= 10^6
// |S| <= 100
// Q <= 10^6

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string t;
        cin >> t;
        cout << m[t] << "\n";
    }
}

