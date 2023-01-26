#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p;

    // Method 1
    p.first = 1;
    p.second = "Pairs";

    // Method 2 :- // using make_pair()
    p = make_pair(2, "STL");

    // Method 3
    p = {3, "Direct Way"};

    cout << p.first << " " << p.second << "\n";

    pair<int, string> q;
    cin >> q.first;
    cout << q.first;
}