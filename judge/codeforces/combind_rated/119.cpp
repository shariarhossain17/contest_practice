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

    vector<ll> v(n);

    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    sort(v.begin(), v.end());

    ll m;
    cin >> m;

    while (m--)
    {
        int cupon;
        cin >> cupon;

        cout << s - v[n - cupon] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}