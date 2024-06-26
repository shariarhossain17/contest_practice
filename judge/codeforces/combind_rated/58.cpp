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

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        x -= i;
        mp[x]++;
    }

    ll ans = 0;
    for (auto i : mp)
    {
        ll a = i.second;

        ans += (a * (a - 1)) / 2;
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