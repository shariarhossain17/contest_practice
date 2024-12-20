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

bool possible(vector<pair<ll, ll>> &v, ll k)
{
    ll l = 0, r = 0;

    for (auto i : v)
    {
        l = max(l - k, i.first);
        r = min(r + k, i.second);

        if (l > r)
            return false;
    }

    return true;
}

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        int l1, r1;
        cin >> l1 >> r1;
        v[i].first = l1;
        v[i].second = r1;
    }

    ll ans = 0, low = 0, high = (ll)1e10;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2LL;

        if (possible(v, mid))
        {
            ans = mid;
            high = mid - 1LL;
        }
        else
        {
            low = mid + 1LL;
        }
    }

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
