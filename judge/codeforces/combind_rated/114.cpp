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

    if (n == 1)
    {
        cout << "-1\n";
        return;
    }

    if (n % 2 == 1)
    {
        for (int i = 1; i <= n - 1; i += 2)
            cout << "23";
        cout << "9";

                cout << "\n";
    }
    else
    {
        for (int i = 1; i < n - 1; i += 2)
            cout << "23";
        cout << "79";
        cout << "\n";
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