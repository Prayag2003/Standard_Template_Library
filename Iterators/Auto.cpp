// AUTO determines the data type of variables automatically and dynamically

#include <bits/stdc++.h>
using namespace std;
int main()
{
    auto a = 1;
    cout << a << "\n";

    auto b = 2.5;
    cout << b << "\n";
    vector<int> v = {1, 2, 3};

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    
    for (auto &val : vp)
    {
        cout << val.first << " " << val.second << "\t";
    }
}