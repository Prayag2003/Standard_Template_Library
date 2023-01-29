#include <bits/stdc++.h>
using namespace std;
int main()
{
    // QUEUE --> FIFO ( First In First Out )

    // Push --> at end
    // Pop --> from Front
    // Front --> peeking the first value

    queue<string>q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");

    while(!q.empty())
    {
        cout << q.front() << " " ;
        q.pop();
    }

}