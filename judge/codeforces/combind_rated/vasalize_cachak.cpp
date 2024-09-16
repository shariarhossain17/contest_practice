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
    ll n, k, x;

    cin >> n >> k >> x;

    ll sum = n * (n + 1) / 2;

    ll c = n - k;

    ll rem_sum = c * (c + 1) / 2;
    ll k_sum = k * (k + 1) / 2;

    if (sum - rem_sum >= x and k_sum <= x)
        Yes;
    else
        No;
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