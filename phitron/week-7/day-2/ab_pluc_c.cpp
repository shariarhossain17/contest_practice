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
    ll x;
    cin >> x;

    if (x == 1)
        cout << -1 << "\n";
    else if (x <= 1000000)
    {
        cout << 1 << " " << x - 1 << " " << 1 << "\n";
    }
    else if (x % 1000000 == 0)
    {
        cout << (x / 1000000) - 1 << " " << 1000000 << " " << 1000000 << "\n";
    }
    else
    {
        cout << (x / 1000000) << " " << 1000000 << " " << x % 1000000 << "\n";
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