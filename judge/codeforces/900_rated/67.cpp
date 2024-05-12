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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = (ll)a * d;
    ll y = (ll)b * c;

    if (x == y)
        cout << 0 << "\n";
    else if (x == 0 or y == 0)
        cout << 1 << "\n";
    else
    {
        if (x % y == 0 || y % x == 0)
            cout << 1 << "\n";
        else
            cout << 2 << "\n";
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