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

    vector<ll> v(n);

    array_input_int(v, 0, n);

    vector<pair<ll, ll>> pr;

    for (int i = 0; i < n; i++)
    {
        pr.push_back({v[i], i + 1});
    }

    sort(v.begin(), v.end());

    sort(pr.begin(), pr.end());
    int cnt = 0;

    for (ll i = 0; i < n and v[i] * v[i] <= 2 * n; i++)
    {
        for (ll j = i + 1; j < n and v[i] * v[j] <= 2 * n; j++)
        {
            if (v[i] * v[j] == pr[i].second + pr[j].second)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
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