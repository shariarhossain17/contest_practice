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
    vi a(n);

    ll l = 0;
    ll r = 0;

    array_input_int(a, 0, n);

    ll cnt = 0;

    bool ng = false;

    while (r <= n)
    {

        if (ng)
        {
            if (r == n or a[r] > 0)
            {
                cnt++;
                ng = false;
            }
        }
        else
        {
            if (a[r] < 0)
            {
                ng = true;
            }
        }

        r++;
    }

    ll s = 0;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
            s += a[i] * -1;
        else
        {
            s += a[i];
        }
    }

    cout << s << " " << cnt;
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