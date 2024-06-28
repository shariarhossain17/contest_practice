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
    ll n, m;
    cin >> n >> m;
    vi v(m);

    array_input_int(v, 0, m);

    ll ans = v[0] - 1;

    for (ll i = 1; i < m; i++)
    {
        if (v[i - 1] > v[i])
        {
            ans += (n - v[i - 1]) + v[i];
        }

        else
        {
            ans += v[i] - v[i - 1];
        }
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}