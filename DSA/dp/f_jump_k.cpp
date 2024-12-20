#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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

int frog_jump(vector<int> &v, int k, int n, vector<int> &dp)
{

    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
        return dp[n];

    int mn_step = INT_MAX;

    for (int i = 1; i <= k; i++)
    {

        if (n - i >= 0)
        {
            int jump = frog_jump(v, k, n - i, dp) + abs(v[n] - v[n - i]);
            mn_step = min(jump, mn_step);
        }
    }

    dp[n] = mn_step;

    return mn_step;
}

void solve()
{

    int n, k;
    cin >> n >> k;

    vi v(n);

    array_input_int(v, 0, n);
    vector<int> dp(n, -1);

    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int mnm = INT_MAX;
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                int jump = dp[i - j] + abs(v[i] - v[i - j]);
                mnm = min(jump, mnm);
            }
        }
        dp[i] = mnm;
    }

    cout << dp[n - 1];
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