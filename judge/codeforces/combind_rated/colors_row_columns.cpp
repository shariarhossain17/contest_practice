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

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));

    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        int x = a[i], y = b[i];

        int xy = x + y;

        int cost = 0;

        for (int j = 0; j <= xy; j++)
        {
            for (int j1 = 0; j1 + j <= k; j1++)
            {
                dp[i + 1][j1 + j] = min(dp[i + 1][j1 + j], dp[i][j1] + cost);
            }

            if (j < xy)
            {
                if (x >= y)
                {
                    x--, cost += y;
                }
                else
                {
                    y--, cost += x;
                }
            }
        }
    }

    cout << (dp[n][k] == 1e9 ? -1 : dp[n][k]) << "\n";
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