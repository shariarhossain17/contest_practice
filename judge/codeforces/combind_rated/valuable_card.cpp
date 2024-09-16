#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, x, k;
    cin >> n >> x;

    ll ans = 1;
    unordered_set<ll> s;
    s.insert(1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> k;

        if (x % k != 0)
            continue;

        vector<ll> v_tmp;
        bool found = false;

        for (auto z : s)
        {
            if (z * k <= x && x % (z * k) == 0)
            {
                v_tmp.push_back(z * k);
                if (z * k == x)
                {
                    found = true;
                    break;
                }
            }
        }

        if (found)
        {
            ans++;
            s.clear();
            s.insert(1);
            s.insert(k);
        }
        else
        {
            for (auto z : v_tmp)
            {
                s.insert(z);
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
