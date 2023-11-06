#define ll long long
#define newLine "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];

        mx = max(mx, (a[i] - b[i]));
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            No;
            return;
        }

        if (a[i] - b[i] < mx && (b[i]))
        {
            No;
            return;
        }
    }

    Yes;
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