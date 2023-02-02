#include <bits/stdc++.h>
using namespace std;

// auto it = lower_bound(s.begin() , s.end() , x)
// will give TLE in many cases since it is O(n) and not log(O(N))

// in maps , UB and LB can only be applied on KEYS
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < int(1e6); i++)
    {
        s.insert(rand());
    }
    for (int i = 0; i < int(1e5); i++)
    {
        auto it = s.lower_bound(rand()); // log(N)
    }
}