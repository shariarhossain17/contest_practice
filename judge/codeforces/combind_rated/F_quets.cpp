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
    ll n, c, d;
    cin >> n >> c >> d;

    vi v(n);
    array_input_int(v, 0, n);

    vector<ll> prefix(n + 1, 0);

    sort(v.rbegin(), v.rend());

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    if (prefix[min(n, d)] >= c)
    {
        cout << "Infinity\n";
        return;
    }

    if (v[0] * d < c)
    {
        cout << "Impossible\n";
        return;
    }

    int l = 0, r = d + 1;

    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;

        ll f = d / mid;
        ll rem = d % mid;

        if (prefix[min(mid, n)] * f + prefix[min(rem, n)] >= c)
            l = mid;
        else
            r = mid;
    }

    cout << l - 1;
    newLine;
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
