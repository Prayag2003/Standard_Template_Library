// Given N Strings , print unique strings in lexographical order
// N<= 10^5
// |S| <= 100000

#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s.insert(temp);
    }
    for (auto &it : s)
    {
        cout << it << "\n";
    }
}
