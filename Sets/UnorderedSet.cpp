// Given N Strings and Q Queries. In each query you are given a string print yes if string is present , else no

#include <iostream>
#include <unordered_set>
using namespace std;

// Cannot insert complex containers in Unordered Sets since their Hash Functions are not defined

int main()
{
    int n;
    cin >> n;
    unordered_set<string> s;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string present;
        cin >> present;

        // Method - 1
        auto it = s.find(present);
        // if(s.find(present) == s.end())
        if (it == s.end())
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";

        // Method - 2
        if (s.count(present))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}