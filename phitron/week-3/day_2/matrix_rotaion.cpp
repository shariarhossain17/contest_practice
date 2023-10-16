#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > a && c > a && d > c && d > b)
    {
        cout << "YES\n";
    }
    else if (a > c && b > d && d > c && b > a)
    {
        cout << "YES\n";
    }
    else if (c > d && a > b && b > d && a > c)
    {
        cout << "YES\n";
    }
    else if (d > b && c > a && a > b && c > d)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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