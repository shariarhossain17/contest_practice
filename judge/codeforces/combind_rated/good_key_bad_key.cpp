#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define int_in(x) cin >> x
#define ll_in2(x, y) cin >> x >> y
#define ll_out(x) cout << x
#define nl cout << "\n"
#define in_range(i, start, end) for (int i = start; i <= end; i++)
#define take_the_array_INT(a, o, n) \
    for (int i = o; i <= n; i++)    \
    {                               \
        cin >> a[i];                \
    }

void solve()
{
    ll n, k;
    ll_in2(n, k);

    vi a(n + 1, 0);
    take_the_array_INT(a, 1, n);

    ll dp[n + 5][35];
    in_range(i, 0, n + 4) in_range(j, 0, 34) dp[i][j] = 0;

    vl pref(n + 5, 0);
    in_range(i, 1, n) pref[i] = pref[i - 1] + a[i];

    in_range(i, 1, n)
    {
        dp[i][0] = a[i];
        in_range(j, 1, 34)
        {
            dp[i][j] = dp[i][j - 1] / 2;
        }
    }

    ll ans = max(0LL, pref[n] - (k * n));

    in_range(i, 1, n)
    {
        ll here = pref[i - 1] - ((i - 1) * k);

        for (int indx = i, j = 1; j <= 34 and indx <= n; indx++, j++)
        {
            here += dp[indx][j];
        }

        ans = max(ans, here);
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int_in(t);

    while (t--)
    {
        solve();
    }

    return 0;
}
