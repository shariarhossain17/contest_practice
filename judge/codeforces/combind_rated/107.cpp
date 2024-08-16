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

    vector<ll> v(n);
    array_input_int(v, 0, n);

    map<int, int> mp;

    for (ll i = 0; i < n; i++)
    {
        mp[v[i]] = i;
    }

    ll s = 0, va = 0;

    int m;
    cin >> m;
    while (m--)
    {
        int a;
        cin >> a;

        ll idx = -1;

        if (mp.find(a) != mp.end())
        {
            idx = mp[a];
        }

        s += idx + 1;
        ll tmp = (n - 1) - idx;
        va += tmp + 1;
    }

    cout << s << " " << va;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
