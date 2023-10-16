#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> ar(n);
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        mp[ar[i]]++;
    }

    ll mx = 0;

    sort(ar.begin(), ar.end());
    for (int i = 0; i < n; i++)
    {
        int val = ar[i];

        if (mp[ar[i]] != 0)
        {
            mx++;
            while (mp[val] > 0)
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout << mx << endl;
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
