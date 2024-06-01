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
    ll n, m;
    cin >> n >> m;
    bool f = false;
    for (int i = 1; i <= n; ++i)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b == c)
            f = true;
    }
    if (m % 2 != 0 || !f)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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