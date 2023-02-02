#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int main()
{

    // LAMBDA FUNCTIONS :
    // small syntax for temporary functions

    // [] (return type ){}

    // ALL_OF , ANY_OF , NONE_OF all return boolean
    auto func = [](int x)
    {
        return x + 2;
    };

    cout << func(2) << "\n";

    auto sum2 = [](int x, int y)
    {
        return x + y;
    };
    cout << sum2(4, 7) << "\n";

    // ALL_OF
    vector<int> v = {2, 3, 5};
    // checking if all elements are pos or not
    cout << all_of(all(v), [](int x)
                   { return x > 0; })
         << "\n";
    // If any one of them is false , then all_of returns false

    // ANY_OF :- if any one is true --> then true
    cout << any_of(all(v), [](int x)
                   { return x > 0; })
         << "\n";

    // NONE_OF :- if no matches --> true;
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x < 0; })
         << "\n";
}
