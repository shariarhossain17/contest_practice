#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int k = floor(log10(n));

    int ans = n - pow(10, k);
    cout << ans << '\n';
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