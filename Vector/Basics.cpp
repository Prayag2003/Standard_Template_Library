#include <iostream>
#include <vector>

using namespace std;

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
    vector<double> vv;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Push Back Complexity is O(1)
        v.push_back(i);
    }

    // maximum size holdable by the vector
    // cout << v.max_size();

    v.push_back(15);
    printVec(v);

    // resizing the vector to length N
    v.resize(n);
    printVec(v);

    // v.empty() returns a bool 
    cout << "Is the Vector Empty ? " << v.empty() << "\n";

    
}