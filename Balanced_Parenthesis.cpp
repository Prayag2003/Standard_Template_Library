#include <iostream>
#include <stack>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        // (( {} )) --> valid Parenthesis
        // ( [ { ]  --> Invalid Parenthesis

        // Iterate over each charachter and insert the opening bracket , and when closing bracket comes , check if the opposite opening is present or not , if yes , pop the opening one ,else answer is NO

        // after complete traversal of the string the stack is empty , then it is valid ,else not a valid

        // ( ( ) ) ( )

        stack<char> ss;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                ss.push(s[i]);
                continue;
            }

            char top = s[i];

            if (s[i] == '}')
            {
                top = ss.top();
                if (top == '{')
                {
                    ss.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == ')')
            {
                top = ss.top();
                if (top == '(')
                {
                    ss.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if (s[i] == ']')
            {
                top = ss.top();
                if (top == '[')
                {
                    ss.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1 || ss.size() != 0)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";

        // emptying the stack
        while (!ss.empty())
        {
            ss.pop();
        }
        s.clear();
    }
}
