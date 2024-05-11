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
    ll n, k, q;

    cin >> n >> k >> q;

    vector<ll> a(k + 1, 0), b(k + 1, 0), c(k + 1, 0);

    map<ll, ll> mp;

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }

    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 1; i < n; i++)
    {
        c[i] = a[i] / b[i];
    }
    while (q--)
    {
        ll d;
        cin >> d;

        int idx = lower_bound(a.begin(), a.end(), d) - a.begin();

        if (d != a[idx])
            idx--;

        ll ans = b[idx];

        ll t = ((d - a[idx])) * b[idx] / abs(a[idx] - a[idx + 1]);

        cout << ans + t;
        newLine;
    }
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