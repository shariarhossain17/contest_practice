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

    vi v(n);
    array_input_int(v, 0, n);

    vi ans(n);
    ll cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur += v[i];
        cout << cur / m << " ";
        cur %= m;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}