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
    ll n, k;
    cin >> n >> k;

    if (n <= k)
    {
        cout << 1 << endl;
        return;
    }

    ll ans = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
            {
                ans = min(ans, n / i);
            }
            if (n / i <= k)
            {
                ans = min(ans, i);
            }
        }
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
