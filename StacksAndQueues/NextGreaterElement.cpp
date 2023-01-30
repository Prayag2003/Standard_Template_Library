#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    stack<int> s;
    vector<int> NGE(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int next, element;
    s.push(a[0]);
    for (int i = 1; i < n; ++i)
    {
        next = a[i];
        if (!s.empty())
        {
            element = s.top();
            s.pop();
            while (next > element)
            {
                NGE[i] = next;
            }
        }
    }
}