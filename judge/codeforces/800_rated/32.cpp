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
    ll a, b;
    cin >> a >> b;

    ll diff = abs(a - b);

    if (a == b)
    {
        cout << 0 << "\n";
        return;
    }

    if (diff >= 1 && diff <= 10)
        cout << 1 << "\n";
    else
    {
        long double diff_double = (long double)diff;
        cout << (ll)ceil(diff_double / 10) << "\n";
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