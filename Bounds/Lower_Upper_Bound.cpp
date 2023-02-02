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
    sort(v.begin(), v.end());

    // Being Sorted is the prerequisite for O(logN) complexity

    //  LOWER BOUND : either finds the given argument element or will find its just greater element
    //  UPPER BOUND : next greater of the number
    //  Both of them returns locations ( Iterators or pointers)

    // Starting , Ending Address , Key element

    // Both have Time Complexity of log(N)

    auto ptr1 = lower_bound(v.begin(), v.end(), 5);
    cout << *ptr1 << "\n";

    auto ptr2 = lower_bound(v.begin(), v.end(), 7);
    cout << *ptr2 << "\n";

    auto ptr3 = lower_bound(v.begin(), v.end(), 100);
    cout << *ptr3 << "\n";

    auto ptr4 = upper_bound(v.begin(), v.end(), 890);
    cout << *ptr4 << "\n";
}