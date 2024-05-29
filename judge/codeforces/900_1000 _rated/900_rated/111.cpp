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
    ll sum = 0;
    vector<ll> v(n);

    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;

        mx = max(mx, a);
    }

    cout << sum - mx << endl;
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