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

    int n, q;
    cin >> n >> q;

    vi v(n);

    array_input_int(v, 0, n);

    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        ll s = (prefix[n] - ((prefix[r]) - (prefix[l - 1]))) + (((r - l) + 1) * k);

        if (s % 2)
            Yes;
        else
            No;
    }
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