#include <iostream>
#include <set>
using namespace std;

// Unlike Sets , multiset allows duplicate keys

void print(multiset<string> &s)
{
    cout << "The Size is " << s.size() << "\n";
    for (auto &val : s)
    {
        cout << val << " ";
    }
    cout << "\n";
}

int main()
{
    multiset<string> s;
    // also gives value in Sorted Order
    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");
    s.insert("abc");
    s.insert("abc");
    s.insert("abc");
    print(s);

    // Can be used instead PRIORITY_QUEUE
    // since they are easy to use

    //  ************ FIND ***********

    // When Multiple Values are present , s.find() returns the iterator of the first value found ...
    // Erase  --> O(1)
    auto it = s.find("abc");
    s.erase(it);
    print(s);

    // But it we write s.erase("abc") , it deletes all the strings "abc" ...
    // Erase  --> O(logN)
    s.erase("abc");
    print(s);

    s.clear();
    print(s);
}