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

    vi v(n);

    array_input_int(v, 0, n);

    map<ll, ll> mp;
    ll sum = 0;

    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {

        if (i % 2)
            v[i] *= -1;

        sum += v[i];

        if (mp.find(sum) != mp.end())
        {
            Yes;
            return;
        }

        mp[sum] = 1;
    }

    No;
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