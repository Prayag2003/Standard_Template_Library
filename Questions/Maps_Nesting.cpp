#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    map<pair<string, string>, vector<ll>> m;
    while (n--)
    {
        string first_name, last_name;
        cin >> first_name >> last_name;
        ll cnt;
        cin >> cnt;
        for (int i = 0; i < cnt; i++)
        {
            ll x;
            cin >> x;

            m[{first_name, last_name}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        // full_name consists of two parts : first_name and last_name
        auto &full_name = pr.first;

        // vector of marks
        auto &marks = pr.second;
        cout << full_name.first << " " << full_name.second << "\n";
        cout << marks.size() << "\n";
        for (auto &val : pr.second)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}