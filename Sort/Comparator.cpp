#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (auto &val : v)
    {
        cout << val << " ";
    }
    cout << "\n";
}

bool cmp(int a, int b)
{
    if (a < b)
        return true;
    return false;
}

bool should_i_swap(pair<int, int> &a, pair<int, int> &b)
{
    if (a < b)
        return true;
    return false;
}

void printPair(vector<pair<int, int>> &v)
{
    for (auto &i : v)
    {
        cout << i.first << " " << i.second << "\n";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (should_i_swap(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    printPair(a);
    sort(a.begin(), a.end());
    printPair(a);

    // Passing the Comp Funtion Argument
    sort(a.begin(), a.end(), should_i_swap);
}