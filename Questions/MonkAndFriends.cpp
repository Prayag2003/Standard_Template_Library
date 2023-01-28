// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/

#include <iostream>
#include <unordered_set>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        unordered_set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll present;
            cin >> present;
            s.insert(present);
        }
        for (int i = 0; i < m; i++)
        {
            ll incoming;
            cin >> incoming;
            auto it = s.find(incoming);
            if (it != s.end())
            {
                cout << "YES\n";
            }
            else cout << "NO\n";
            s.insert(incoming);
        }
    }
}