#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <set>
#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n, k;
    cin >> n >> k;

    vi nums(n);
    array_input_int(nums, 0, n);

    set<int> numSet(nums.begin(), nums.end());

    vi missing_array;

    for (int i = 1; i <= 1000; i++)
    {
        if (numSet.find(i) == numSet.end())
        {
            missing_array.pb(i);
        }
    }

    cout << missing_array[k - 1];
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
