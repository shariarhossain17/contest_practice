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
    ll n;
    cin >> n;
    vi v(n);

    array_input_int(v, 0, n);

    vector<ll> suffix(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + v[i];
    }

    ll ans = suffix[0];

    for (int i = 1; i < n; i++)
    {
        if (suffix[i] > 0)
            ans += suffix[i];
    }

    cout << ans << endl;
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
