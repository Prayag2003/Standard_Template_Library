#include <iostream>
#include <unordered_map>
using namespace std;

void printUMap(unordered_map<int, string> &m)
{
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << "\n";
    }
}

int main()
{
    // Uses HASH TABLE for inbuilt implementation

    unordered_map<int, string> m;
    m[1] = "Prayag";
    m[2] = "Bhatt";
    m[3] = "Unordered Map";
    m[5] = "abc";

    printUMap(m);

    // Insertion , Accessing Time Complexity is O(1);
    // .find() , .erase() --> O(1)

    // in case of Unordered Maps , we cannot add Complex Data Types since there Hash Function is not defined internally

    // Those who Hash Function is defined are : int, long long int, double , string ....

    // set , vectors , pairs dont have
    // Only map can do that since they are implemented via comparsions
}