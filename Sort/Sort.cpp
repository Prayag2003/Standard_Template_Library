#include <bits/stdc++.h>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 10;
    int a[10] = {3, 6, 2, 1, 0, -1, -5, 10, 33, 2};

    // sort ( a +  initial position , a + ending position + 1)
    sort(a + 3, a + n);
    sort(a, a + n);
    printArr(a, n);

}