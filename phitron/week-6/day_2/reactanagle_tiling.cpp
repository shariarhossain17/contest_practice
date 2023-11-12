#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r, l;
    cin >> r >> l;

    if (r % 2 == 0 || l % 2 == 0)
        cout << "YES\n";
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
