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
    int a, b, x, y, n;

    cin >> a >> b >> x >> y >> n;

    ll ans = LLONG_MAX;

    for (int i = 0; i < 2; ++i)
    {
        int da = min(n, a - x);
        int db = min(n - da, b - y);

        ans = min(ans, (a - da) * 1ll * (b - db));

        swap(x, y);
        swap(a, b);
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