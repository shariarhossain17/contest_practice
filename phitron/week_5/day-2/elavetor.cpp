#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = a - 1;
    int y = abs(b - c) + (c - 1);
    int ans;
    if (x < y)
        ans = 1;
    else if (x == y)
        ans = 3;
    else
        ans = 2;
    cout << ans << "\n";
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