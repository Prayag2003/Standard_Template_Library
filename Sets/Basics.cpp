#include <iostream>
#include <set>
using namespace std;

// Set of Keys or Unique Elements
// similar to maps
// implemented by RED-BLACK TREES ( Self- Balancing Trees )

void print(set<string> &s)
{
    for (auto &val : s)
    {
        cout << val << " ";
    }
    cout << "\n";

    // for (auto it = s.begin(); it != s.end(); ++it)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << "\n";
}

int main()
{
    set<string> s;
    // stores in sorted values
    // INSERTION , ACCESSING of an element = O(logN)

    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");
    s.insert("abc");

    // To Access Value

    // ************ FIND ************
    // O(logN)

    // if exists , then Iterator is returned , else s.end() is returned

    auto it = s.find("abc");
    if (it != s.end())
    {
        cout << (*it) << "\n";
    }

    print(s);

    // ************  ERASE *************
    // Can take iterator as well as index in input

    if (it != s.end())
    {
        s.erase(it);
    }
    print(s);

    s.erase("pqr");
    print(s);
}