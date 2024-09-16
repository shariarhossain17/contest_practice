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

int frog_jump(vector<int> &v, int k, int n, vector<int> &dp)
{

    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
        return dp[n];

    int left_jump = frog_jump(v, k, n - 1, dp) + abs(v[n] - v[n - 1]);

    int right_jump = INT_MAX;

    if (n > k)
    {
        right_jump = frog_jump(v, k, n - k, dp) + abs(v[n] - v[n - k]);

        cout << n - k << " ";
    }

    return dp[n] = min(left_jump, right_jump);
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(n);

    vector<int> dp(n, -1);
    array_input_int(v, 0, n);

    frog_jump(v, k, n - 1, dp);

    // for (int i = 0; i <= n; i++)
    //     cout << dp[i] << " ";
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