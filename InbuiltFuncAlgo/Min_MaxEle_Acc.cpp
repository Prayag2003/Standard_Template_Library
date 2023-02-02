#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mini = *min_element(v.begin(), v.end());
    cout << mini << "\n";
    int maxi = *max_element(v.begin(), v.end());
    cout << maxi << "\n";

    // Start , End , Initial Sum
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n";

    // return Count of Elements in vector/array
    int cnt6 = count(v.begin(), v.end(), 6);
    cout << cnt6 << "\n";

    // FIND FUNCTION
    auto it = find(v.begin(), v.end(), 2);
    if (it == v.end())
    {
        cout << "Not Found\n";
    }
    else
        cout << *it << "\n";

    // REVERSE
    reverse(v.begin(), v.end());

    string g = "abcdef";
    reverse(g.begin(), g.end());
    cout << g << "\n";
}