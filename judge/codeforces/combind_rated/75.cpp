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
    ll x;
    cin >> x;

    unordered_set<ll> cubes;
    for (ll i = 1; i * i * i <= x; i++)
    {
        ll a = i * i * i;
        cubes.insert(a);
    }

    for (ll i = 1; i * i * i <= x; i++)
    {
        ll b = i * i * i;
        if (cubes.count(x - b))
        {
            Yes;
            return;
        }
    }

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
