#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> mp = {{'{', -1}, {'(', -2}, {'[', -3}, {'}', 1}, {')', 2}, {']', 3}};

string isBalanced(string s)
{
    stack<char> st;
    for (char curr_symbol : s)
    {
        // if the Symbol is opening charachter , then its relative mapping integer is negative and hence we push it into the stack
        if (mp[curr_symbol] < 0)
        {
            st.push(curr_symbol);
        }

        // if curr curr_symbol is closing bracket
        else
        {
            // check if the stack is already empty ?
            if (st.empty())
            {
                return "NO";
            }
            else
            {
                char popped = st.top();
                if (mp[curr_symbol] + mp[popped] != 0)
                    return "NO";
                st.pop();
            }
        }
    }
    // if the stack is empty then "YES"
    if(st.empty())
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s);
        
    }
}