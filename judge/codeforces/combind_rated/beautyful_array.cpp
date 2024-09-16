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

    vi v(n);

    array_input_int(v, 0, n);

    map<int, vector<ll>> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i] % k].push_back(v[i]);
    }

    ll ans = 0;
    int odd = 0;

    for (auto v1 : mp)
    {

        vector<ll> a = v1.second;
        sort(a.begin(), a.end());

        if (a.size() % 2 == 0)
        {
            for (int i = 0; i < a.size(); i += 2)
            {
                ans += abs(a[i] - a[i + 1]) / k;
            }
        }
        else
        {
            odd++;

            ll cur = 0;

            for (int i = 1; i < a.size(); i += 2)
            {

                cur += (a[i + 1] - a[i]) / k;
            }

            ll res = cur;

            for (int i = 1; i < a.size(); i += 2)
            {

                cur -= abs((a[i + 1] - a[i])) / k;

                cur += abs((a[i - 1] - a[i])) / k;

                res = min(cur, res);
            }
            ans += res;
        }
    }

    if (odd > 1)
    {
        cout << "-1\n";
    }
    else
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