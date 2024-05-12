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
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    array_input_int(v, 0, n);

    ll ans = 0;

    if (b > 1)
    {
        ll dif = b - 1;
        ans += dif;
        b -= dif;
    }

    for (int i = 0; i < n; i++)
    {
        b += v[i];

        if (b > a)
        {
            ans += a - 1;
            b = 1;
        }
        else
        {
            ans += (b - 1);
            b = 1;
        }
    }

    cout << ans + 1;
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