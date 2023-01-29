// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    map<int, multiset<string>> m;

    while (n--)
    {
        string s;
        cin >> s;
        ll marks;
        cin >> marks;
        m[-1 * marks].insert(s);
    }
    // Method - 1 (Find greatest marks via reverse iterator)
    // auto curr_itr = --m.end();
    // while (true)
    // {
    //     auto student = (*curr_itr).second;
    //     auto marks = (*curr_itr).first;
    //     for (auto &val : student)
    //     {
    //         cout << val << ' ' << marks << "\n";
    //     }
    //     if (curr_itr == m.begin())
    //     {
    //         break;
    //     }
    //     curr_itr--;
    // }

    // // Method-2
    // we can take negative input marks so there is no need to find last iterator and iterate backwards
    for (auto &itr : m)
    {
        auto &students = itr.second;
        auto &marks = itr.first;
        for (auto &val : students)
        {
            cout << val << " " << -1 * marks << "\n";
        }
    }
}