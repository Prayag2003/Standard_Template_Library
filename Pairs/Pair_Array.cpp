#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p[3];

    for (int i = 0; i < 3; i++)
    {
        p[i] = make_pair(a[i], b[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << " " << p[i].second << "\n";
    }
    
}
