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
    ll x, y, a, b;

    cin >> x >> y >> a >> b;

    ll ans = 0;

    ll mx = max(x, y);
    ll mn = min(x, y);

    ll dif = mn - 0;
    ll dif2 = mx - mn;
    if (2 * a < b)
    {

        ans += 2 * a * dif;
        ans += dif2 * a;
    }
    else
    {
        ans += b * dif;
        ans += dif2 * a;
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