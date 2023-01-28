// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(pair<int, string> p1, pair<int, string> p2)
{
    if (p1.first != p2.first)
    {
        return p1.first > p2.first;
    }
    return p1.second < p2.second;
}

int main()

{
    int t;
    cin >> t;
    vector<pair<int, string>> v;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        ll marks;
        cin >> marks;
        v.push_back({marks, s});
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " " << v[i].first << "\n";
    }
}