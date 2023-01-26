#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i * 10);
    }

    // Vector is also ZERO BASED INDEXED LIKE ARRAY

    cout << "Reference at position 'g' is "
         << v[0] << "\n";

    cout << v.at(4) << "\n";

    cout << "Front is " << v.front() << "\n";
    cout << "Back is " << v.back() << "\n";
    
}
