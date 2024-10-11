#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
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

int house_robber(vector<int> &v, int n, vector<int> &dp)
{
    if (n == 0)
        return v[n];
    if (n < 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int take = house_robber(v, n - 2, dp) + v[n];

    int not_take = 0 + house_robber(v, n - 1, dp);

    return dp[n] = max(take, not_take);
}

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);

    vector<int> dp(n, -1);

    cout << house_robber(nums, n - 1, dp) << "\n";
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
