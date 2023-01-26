#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // Dynamic Rows and Columns
    vector<vector<int>> vv;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        // since there is no vector, we make a current temporary vector and push the values inside it
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vv.push_back(temp);
        temp.clear();
    }

    for (int i = 0; i < vv.size(); i++)
    {
        printVec(vv[i]);
    }
}