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
    int n, x, y;
    cin >> n >> x >> y;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<pair<ll, ll>, int> mp;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        ll tx = (v[i] % x);
        ll ty = (v[i] % y);

        cnt += mp[{(x - tx) % x, ty}];

        mp[{tx, ty}]++;
    }

    cout << cnt << endl;
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