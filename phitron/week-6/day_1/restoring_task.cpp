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

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (x > a)
    {
        if (a + c >= x)
            c -= x - a;
        else
        {
            cout << "NO\n";
            return;
        }
    }

    if (c + b < y)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
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