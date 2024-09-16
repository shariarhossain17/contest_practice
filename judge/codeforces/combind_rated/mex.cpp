#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (ll i = o; i < n; i++)   \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    ll n, m = 0;
    cin >> n;

    ll ar[n];

    for (ll i = 0; i < n; i++)
        ar[i] = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x < n)
            ar[x]++;
    }
    while (m < n && ar[m])
    {
        m++;
    }

    ll dp[n];

    for (ll i = 0; i < n; i++)
        dp[i] = LLONG_MAX;

    dp[m] = 0;

    for (ll i = m; i >= 0; i--)
    {
        for (ll j = 0; j < i; j++)
        {
            dp[j] = min(dp[j], dp[i] + i * ar[j]);
        }
    }

    cout << dp[0] - m;
    newLine;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
