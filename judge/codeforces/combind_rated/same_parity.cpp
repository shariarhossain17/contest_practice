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

    if (n < k || ((n % 2 == 1) && (k % 2 == 0)))
    {
        No;
        return;
    }

    if (n % 2 == 0 && k % 2 == 0)
    {
        if ((n - (k - 1)) <= 0)
        {
            No;
            return;
        }

        Yes;
        for (int i = 0; i < k - 1; i++)
        {
            cout << "1 ";
        }
        cout << n - (k - 1) << "\n";
    }

    else if (n % 2 == 1 && k % 2 == 1)
    {
        if ((n - (k - 1)) <= 0)
        {
            No;
            return;
        }

        Yes;
        for (int i = 0; i < k - 1; i++)
        {
            cout << "1 ";
        }
        cout << n - (k - 1) << "\n";
    }

    else if (n % 2 == 0 && k % 2 == 1)
    {
        if ((n - 2 * (k - 1)) <= 0)
        {
            No;
            return;
        }

        Yes;
        for (int i = 0; i < k - 1; i++)
        {
            cout << "2 ";
        }
        cout << n - 2 * (k - 1) << "\n";
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
