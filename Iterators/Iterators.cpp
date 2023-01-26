#include <bits/stdc++.h>
using namespace std;
#define pb push_back

// Pointers point to the memory address which can be accessed via *
// Iterators points to the container elements

// .begin() points to the first element
// .end() points to next to last element
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.pb(i + 1);
    }

    vector<int>::iterator it = v.begin();

    // *it can access the value of the elements
    // iterate and access elements
    cout << (*it) << " " << *(it + 1) << " " << *(it + 2) << " " << *(it + 3) << "\n";

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << *(it) << "\n";
    }

    // ******************  difference between it++ and it= it+1  ******************

    // it++ moves to the next iterator
    // it+1 moves to the next location in memory_order

    // since maps and sets are non continous we cannot use it+1 as i brings to the next location

    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};

    vector<pair<int, int>>::iterator itt = vp.begin();
    for (itt = vp.begin(); itt != vp.end(); ++itt)
    {
        cout << (*itt).first << " " << (*itt).second << "\t";
    }

    // alt method
    for (itt = vp.begin(); itt != vp.end(); ++itt)
    {
        cout << itt->first << " " << itt->second << "\t";
    }
}
