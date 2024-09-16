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

    ll a, c, n;
    cin >> a >> c >> n;
    vi v(n);

    array_input_int(v, 0, n);

    sort(v.begin(), v.end(), greater<int>());

    ll ans = 0;

    int i = 0;

    while (i < n)
    {

        ans += (c - 1);

        ll rem = 1 + v[i];
        c = min(a, rem);
        i++;
    }

    cout << ans + c << endl;
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