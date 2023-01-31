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
    if (a > b)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cmp(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    printVec(a);
}