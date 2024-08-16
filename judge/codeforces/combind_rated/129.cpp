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

ll tot(ll n)
{
    return n * (3 * n + 1) / 2;
}

ll mx(ll n)
{
    ll low = 1, hi = n, mid;

    while (low < hi)
    {
        mid = (low + hi + 1) / 2;

        if (tot(mid) <= n)
            low = mid;
        else
            hi = mid - 1;
    }

    return low;
}
void solve()
{
    int n;
    cin >> n;

    ll ans = 0;

    while (n >= 2)
    {
        ans++;
        n -= tot(mx(n));
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