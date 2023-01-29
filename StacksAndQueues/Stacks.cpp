#include<bits/stdc++.h>
using namespace std;
int main()
{
    // STACK --> LIFO ( Last In First Out )

    // 1) push
    // 2) pop
    // 3) peek

    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }


}