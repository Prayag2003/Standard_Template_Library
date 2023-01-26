#include <iostream>
#include <vector>
using namespace std;
#define pb push_back
#define ppb pop_back

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i * 10);
    }

    printVec(v);

    // *****************  .assign() assigns new value to vector elements by replacing all the old ones
    // ******************
    v.assign(3, 40);
    printVec(v);

    // clears the vector
    v.clear();
    printVec(v);

    // Both push and pop back are of O(1) Time Complexity
    // push_back

    v.pb(10);
    v.pb(20);
    v.pb(30);
    v.pb(40);
    v.pb(50);
    v.pb(60);
    v.pb(70);
    printVec(v);

    //*****************  removes the last element  *****************
    v.ppb();

    // Fixed Sized Vector
    vector<int> vv(20);

    // initialising a vector of size n, with all values as some constant k

    //*****************  Format :-  vector<int> v(size, constant number)  ***************

    vector<int> vvv(10, -1);
    printVec(vvv);

    //***************** copying vector ( Deep Copy )
    // TC : O(N) ***************
    vector<int> v2 = v;
    v.pb(11);
    printVec(v);
    printVec(v2);

    //***************** inserts elements at position ******************
    v.insert(v.begin(), 5);
    printVec(v);
    v.insert(v.begin() + 4, 6);
    printVec(v);

    // ***************** .erase at a specific position  ****************
    auto it = v.begin();
    v.erase(it + 2);
    printVec(v);

    // *************  swapping 2 vectors ***********
    vector<int> a, b;
    a.pb(1);
    a.pb(2);

    b.pb(3);
    b.pb(4);
    b.pb(5);


    printVec(a);
    printVec(b);

    a.swap(b);

    printVec(a);
    printVec(b);

    //  ***************  emplace  ****************
    // inserts new element at a position
    a.emplace(a.begin(),1111);
    a.emplace_back(20);
    cout << a[0] << " "  << a[a.size()-1] << "\n";
    printVec(a);

}
