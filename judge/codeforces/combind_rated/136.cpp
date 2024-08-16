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
    vi v(n);

    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    ll ans = v[n - 1] - v[0];

    ll cnt = 0;

    ll el = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[0] == v[i])
            cnt++;

        if (v[n - 1] == v[i])
            el++;
    }

    if (v[0] == v[n - 1])
    {
        cout << ans << " " << n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << ans << " " << cnt * el << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}