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
    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    ll s = v[0];
    ll ans = s;

    bool odd = (v[0] % 2 != 0); // (v[0]%2==0) it's only for positive value
    bool even = !odd;

    if (s < 0)
        s = 0;

    for (int i = 1; i < n; i++)
    {

        if (v[i] % 2 != 0 && !odd)
        {
            s += v[i];
            even = false;
            odd = true;
        }
        else if (v[i] % 2 == 0 && !even)
        {
            s += v[i];
            odd = false;
            even = true;
        }
        else
        {

            s = v[i];
            odd = (v[i] % 2 != 0);
            even = !odd;
        }

        ans = max(ans, s);

        if (s < 0)
        {
            s = 0;
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
