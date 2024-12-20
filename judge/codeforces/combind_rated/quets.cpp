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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    array_input_int(a, 0, n);
    array_input_int(b, 0, n);

    ll s = 0, mx = 0, res = 0;

    for (int i = 0; i < min(n, k); i++)
    {
        s += a[i];

        mx = max(b[i], mx);

        res = max(res, s + mx * (k - i - 1));
    }

    cout << res << endl;
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
