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
    vi v(n);
    array_input_int(v, 0, n);

    int cnt = 0;

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << 0;
        newLine;
        return;
    }

    if (v[0] == 1 or v[n - 1] == n)
        cout << 1 << "\n";
    else if (v[0] == n and v[n - 1] == 1)
        cout << 3 << "\n";
    else
        cout << 2 << "\n";
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