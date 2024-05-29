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
    int x, y;
    cin >> x >> y;

    ll ans = 0;

    ll z = y / 2;
    ans += z;
    x -= 7 * z;
    x = max(0, x);

    if (y % 2 == 1)
    {
        x -= 11;
        ans++;
    }
    x = max(0, x);

    ans += x / 15;
    x %= 15;

    if (x > 0)
    {
        ans++;
    }

    cout << ans << "\n";
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