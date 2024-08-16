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
    ll t, x, s;

    cin >> t >> x >> s;

    if (x < t)
    {
        No;
        return;
    }

    if (x == (t + 1))
    {
        No;
        return;
    }

    x -= t;
    x %= s;

    if (x == 0)
    {
        Yes;
        return;
    }

    if (x == 1)
    {
        Yes;
        return;
    }

    No;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}