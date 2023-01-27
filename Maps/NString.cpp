// Given N Strings , print unique strings in leographical order with their frequency

// N <= 10^5
// |S| <= 100

#include <iostream>
#include <map>
using namespace std;
int main()
{

    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << "   ";
    }
}