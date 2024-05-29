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

    if (n < 3 or n == 4)
        cout << "-1\n";
    else if (n % 3 == 0)
        cout << n / 3 << " 0 0\n";
    else if (n % 3 == 1)
        cout << (n - 7) / 3 << " 0 1\n";
    else
        cout << (n - 5) / 3 << " 1 0\n";
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