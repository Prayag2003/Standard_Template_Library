#include <bits/stdc++.h>
using namespace std;

// Stores Key-Value Pairs
// Maps -> In Sorted Order of Keys
// Normal /Sorted Maps are implemented by Red-Black Trees

// Unordered Maps --> Random Order

// iterator++ since elements are stored in non-contiguous memo locations

void printMap(map<int, string> &m)
{
    cout << "Map Size is " << m.size();
    cout << "\n";
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << "   ";
    }
    cout << "\n";
}

int main()
{
    map<int, string> m;
    m[1] = "Prayag";
    m[2] = "Bhatt";
    m[5] = "Maps";

    m.insert({4, "Iron Man"});

    auto it = m.begin();
    // while (it != m.end())
    // {
    //     cout << it->first << " " << (*it).second << "\t";
    //     it++;
    // }

    printMap(m);

    // Insertion , Accessing , Deleting Time Complexity of all values is O(nlogn);

    // Each Key is Unique and if value not added , by default its 0 , null ....

    // ******* FIND ******
    // returns an iterator if value if found, else returns m.end();

    auto i = m.find(3);
    // TC : O(logn)
    if (i == m.end())
    {
        cout << "Not Found\n";
    }
    else
        cout << it->first << " " << it->second << "\n";

    // ******* ERASE ********

    auto itt = m.find(5);
    m.erase(itt);
    printMap(m);

    auto ii = m.find(7);
    if (ii != m.end())
    {
        m.erase(ii);
    }
    printMap(m);


    // ****** CLEAR *******
    m.clear();
    printMap(m);

    // Insertion Operation also depends on the Key , if string added , it depends on size of the key

    // when new key is added , then it is compared to the existing keys and it gets inserted at the right place , string comparison time is also added ,
    // TC :- O( string.size * n )
    
}
