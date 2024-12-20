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
    ll n, m, k;

    cin >> n >> m >> k;
    if (k == 1)
        cout << "1" << endl;
    else if (k == 2)
    {
        if (n > m)
        {
            cout << m << endl;
        }
        else
        {
            cout << (n - 1) + m / n << endl;
        }
    }
    else if (k == 3)
    {
        if (m > n)
        {
            int ans = m - n + 1;
            ans -= m / n;
            cout << ans << endl;
        }
        else
            cout << "0" << endl;
    }
    else
        cout << "0" << endl;
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