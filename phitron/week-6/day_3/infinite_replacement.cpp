#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int n;
    n = s.size();
    int m;
    m = t.size();

    if (t.size() == 1)
    {
        if (t[0] == 'a')
        {
            cout << 1 << endl;
        }
        else
        {
            ll ans = (1LL << n);
            cout << ans << endl;
        }
    }
    else
    {
        if (count(t.begin(), t.end(), 'a') > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ans = (1LL << n);
            cout << ans << endl;
        }
    }
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