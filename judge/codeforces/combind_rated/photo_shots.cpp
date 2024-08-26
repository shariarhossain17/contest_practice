#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<ll> // Change vector<int> to vector<ll>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (ll i = o; i < n; i++)   \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll sz;
    cin >> sz;
    vi v(sz);
    array_input_int(v, 0, sz);
    sort(v.begin(), v.end(), greater<ll>());
    vector<vector<ll>> grid(n, vector<ll>(m, 0));
    for (ll i = 0; i <= n - k; i++)
    {
        for (ll j = 0; j <= m - k; j++)
        {
            grid[i][j]++;
            if (i + k < n)
                grid[i + k][j]--;
            if (j + k < m)
                grid[i][j + k]--;
            if (i + k < n and j + k < m)
                grid[i + k][j + k]++;
        }
    }
    for (ll i = 1; i < n; i++)
        grid[i][0] += grid[i - 1][0];
    for (ll j = 1; j < m; j++)
        grid[0][j] += grid[0][j - 1];
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];
        }
    }

    vi vals;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            vals.pb(grid[i][j]);
        }
    }
    sort(vals.begin(), vals.end(), greater<ll>());
    ll ans = 0;
    for (ll i = 0; i < min(sz, n * m); i++)
    {
        ans += vals[i] * v[i];
    }
    cout << ans << "\n";
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
