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
    ll n, k;
    cin >> n >> k;

    ll od = (n / 2) + (n % 2);
    ll result = od - k;

    if (n < 2 * k)
    {
        cout << "no\n";
    }
    else if (n == 2 * k)
    {
        cout << "yes\n";
    }
    else
    {
        if (result % 2 == 0)
            cout << "yes\n";
        else
            cout << "no\n";
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