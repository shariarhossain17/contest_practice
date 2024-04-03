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

bool cmp(const pair<pair<ll, ll>, ll> &a, const pair<pair<ll, ll>, ll> &b)
{
    if (a.first.first == b.first.first)
    {
        if (a.first.second == b.first.second)
            return a.second < b.second;

        return a.first.second < b.first.second;
    }

    return a.first.first > b.first.first;
}

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    vector<pair<pair<ll, ll>, ll>> v;
    for (ll person = 0; person < n; person++)
    {

        ll time = h, spend_time = 0;

        vi a(m);
        array_input_int(a, 0, m);

        sort(a.begin(), a.end());

        ll cnt = 0, penalty = 0, prev = 0;

        for (ll i = 0; i < m; i++)
        {
            spend_time += a[i];

            if (spend_time > h)
                break;

            penalty += spend_time;
            cnt++;
        }

        v.pb({{cnt, penalty}, person});
    }

    sort(v.begin(), v.end(), cmp);

    for (ll i = 0; i < n; i++)
    {
        if (v[i].second == 0)
        {
            cout << i + 1;
            newLine;
            break;
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
