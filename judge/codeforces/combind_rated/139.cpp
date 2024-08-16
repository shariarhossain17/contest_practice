#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_ll(a, o, n) \
    for (int i = o; i < n; i++) \
    {                           \
        cin >> (a[i]);          \
    }

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);

    array_input_ll(v, 0, n);

    sort(v.begin(), v.end(), greater<ll>());

    vector<ll> prefix(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = v[i] + prefix[i];
    }

    while (q--)
    {
        ll xj;
        cin >> xj;

        auto it = lower_bound(prefix.begin(), prefix.end(), xj);
        if (it == prefix.end())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << distance(prefix.begin(), it) << "\n";
        }
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
