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

    vector<pair<ll, ll>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), [](pair<ll, ll> &a, pair<ll, ll> &b)
         { return a.second < b.second; });

    ll cost = k;
    ll left = n - 1;
    ll cnt = 0;
    ll i = 0;

    while (cnt != left)
    {
        if (v[i].second >= k)
            break;
        int req = min(left - cnt, v[i].first);
        cnt += req;
        cost += req * v[i].second;
        i++;
    }

    cost += (left - cnt) * k;

    cout << cost << endl;
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
