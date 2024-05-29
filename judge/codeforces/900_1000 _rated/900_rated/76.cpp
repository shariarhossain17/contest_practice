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

    ll mn = LLONG_MAX;

    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s += x;
        if (x % 2 == 1)
            mn = min(mn, x);
    }

    if (s % 2 == 1)
        s -= mn;
    cout << s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}