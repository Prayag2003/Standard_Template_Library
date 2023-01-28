// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

#include <iostream>
#include <set>
using namespace std;
#define ll long long int

// we will use , multisets instead vector since we need to insert , delete in logN complexity

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        multiset<ll> bags;
        ll candies = 0;

        for (int i = 0; i < n; i++)
        {
            ll candy_cnt;
            cin >> candy_cnt;
            bags.insert(candy_cnt);
        }
        for (int i = 0; i < k; i++)
        {
            // finding the last iterator of the bags
            auto last_itr = (--bags.end());
            // also auto it = bags.end();
            // --it works
            ll val = *last_itr;

            //  *******  only erase via iterator otherwise all the values will be erased  *******

            bags.erase(last_itr);
            candies += val;
            val = val / 2;
            bags.insert(val);
        }
        cout << candies << "\n";
    }
}