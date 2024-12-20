#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(a) (int)(a).size()
#define forn(i, n) for (int i = 0; i < (n); ++i)

ll calc(vector<int> &a)
{
    ll zeroes = 0, ans = 0;
    for (int i = sz(a) - 1; i >= 0; --i)
    {
        if (a[i] == 0)
            ++zeroes;
        else
            ans += zeroes;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];

    ll ans = calc(a);

    forn(i, n)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
