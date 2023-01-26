#include <bits/stdc++.h>
using namespace std;
int main()
{
    // RANGE BASED LOOPS
    // access the elements w/o index
    vector<int> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    // copy of value of elements in v
    for (int val : v)
    {
        val++;
    }

    // no change in the original value of vector v since all are copies , for actual values we use &

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << "\n";
    for (int &val : v)
    {
        val++;
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << "\n";
}