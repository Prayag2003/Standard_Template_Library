#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void vp(vector<pair<int, int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << " \t";
    }
    cout << "\n";
}

int main()
{

    // Each element will be a Pair

    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    // vp(v);


    // taking user input
    vector<pair<int, int>> vv;
    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        // vv.push_back(make_pair(x,y));
        vv.push_back({x, y});
    }
    vp(vv);

    //  ********* SWAPPING  *********
    //  if we swap 2 elements , then the both pairs will be swapped

        
}