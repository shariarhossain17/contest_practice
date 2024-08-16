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
    int n, k;
    cin >> n >> k;

    if (n % 2)
        cout << 1 << " " << n / 2 << " " << n / 2 << "\n";
    else
    {
        if (n % 4 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
        else
        {
            cout << 2 << " " << n / 2 - 1 << " " << n / 2 - 1 << "\n";
        }
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