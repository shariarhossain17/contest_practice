#include <bits/stdc++.h>
using namespace std;

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

// bottom up
int climb_stairs(int n, vector<int> &dp)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = climb_stairs(n - 1, dp) + climb_stairs(n - 2, dp);
}
void solve()
{
    int n;
    cin >> n;

    // vector<int> dp(n + 1, -1);

    // cout << climb_stairs(n, dp);

    // bottom up approach

    vector<int> dp(n + 1, -0);

    dp[0] = 1;
    dp[1] = 1;

    //  remove extra space

    int prev = 1;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {

        int cur = prev2;
        prev2 = prev2 + prev;
        prev = cur;
    }

    cout << prev2 << endl;
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