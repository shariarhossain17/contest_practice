#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (y % x)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }

    int di = y / x;

    cout << 1 << " " << di << "\n";
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