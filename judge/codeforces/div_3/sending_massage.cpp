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
    ll n, f, a, b, prev = 0, mn = INT_MAX;
    cin >> n >> f >> a >> b;

    vector<ll> v(n);

    array_input_int(v, 0, n);

    for (int i = 0; i < n; i++)
    {
        mn = min(b, abs((prev - v[i])) * a);

        f -= mn;
        prev = v[i];
    }
    if (f > 0)
        Yes;
    else
        No;
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