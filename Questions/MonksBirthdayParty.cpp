// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/

#include <iostream>
#include <set>
using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<string> ss;
        while (n--)
        {
            string s;
            cin >> s;
            ss.insert(s);
        }
        for (auto &val:ss)
        {
            cout << val << "\n";
        }
    }
}