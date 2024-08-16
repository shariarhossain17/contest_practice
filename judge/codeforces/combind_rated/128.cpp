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
    ll a, b, n, t;
    cin >> a >> b >> n >> t;

    ll valuaA = n * a;

    if (valuaA == t)
    {
        Yes;
        return;
    }

    ll diff = valuaA - t;
    ll maxSubtract = (diff + n - 1) / n;

    if ((valuaA - maxSubtract * n) + b >= t)
    {
        Yes;
    }
    else
    {
        No;
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
