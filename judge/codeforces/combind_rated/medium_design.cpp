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

int value(vector<pair<int, int>> vec, ll lf, ll x)
{
    vector<ll> pref(x + 1, 0);

    for (auto i : vec)
    {
        if (lf >= i.first and lf <= i.second)
            continue;

        pref[i.first]++;
        if (i.second + 1 <= x)
            pref[i.second + 1]--;
    }

    ll mx = 0;
    for (ll i = 1; i < x; i++)
    {
        pref[i] += pref[i - 1];
        mx = max(mx, pref[i]);
    }

    return mx;
}

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> vec;

    set<ll> s;

    s.insert(1);
    s.insert(m);

    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        vec.push_back({l, r});
        s.insert(l);
        s.insert(r);
    }

    unordered_map<ll, ll> mp;
    ll x = 1;

    for (auto i : s)
    {
        mp[i] = x;
        x++;
    }

    for (ll i = 0; i < n; i++)
    {
        vec[i].first = mp[vec[i].first];
        vec[i].second = mp[vec[i].second];
    }

    ll ans = value(vec, 1, x);
    ll ans2 = value(vec, x - 1, x);

    cout << max(ans, ans2) << endl;
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