#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int tb, pb, bonus;
    cin >> tb >> pb >> bonus;

    int per_day_bun = pb * 5;

    int remaining_bun = tb / per_day_bun;

    cout << remaining_bun + bonus << "\n";
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