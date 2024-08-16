#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    set<int> setA, setB;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
            setA.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x <= k)
            setB.insert(x);
    }

    // Elements common in both sets
    set<int> common;
    set<int> uniqueA, uniqueB;

    for (int i = 1; i <= k; i++)
    {
        bool inA = setA.count(i);
        bool inB = setB.count(i);

        if (inA && inB)
        {
            common.insert(i);
        }
        else if (inA)
        {
            uniqueA.insert(i);
        }
        else if (inB)
        {
            uniqueB.insert(i);
        }
        else
        {
            // If a number from 1 to k is missing in both arrays
            cout << "NO\n";
            return;
        }
    }

    int need = k / 2;
    int countUniqueA = uniqueA.size();
    int countUniqueB = uniqueB.size();
    int countCommon = common.size();

    if (countUniqueA <= need && countUniqueB <= need && countCommon >= (need - countUniqueA) && countCommon >= (need - countUniqueB))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}