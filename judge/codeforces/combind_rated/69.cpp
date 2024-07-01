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
    int n;
    cin >> n;

    if (n % 3 == 0 or n % 7 == 0)
    {
        Yes;
        return;
    }

    while (n >= 7)
    {
        n -= 7;
        if (n % 3 == 0 or n % 7 == 0)
        {
            Yes;
            return;
        }
    }
    while (n >= 3)
    {
        n -= 3;
        if (n % 3 == 0 or n % 7 == 0)
        {
            Yes;
            return;
        }
    }

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