#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }
    int ans = 0;
    for (int c = 'a'; c <= 'z'; c++)
    {
        int mn = min(mp[c], mp[toupper(c)]);
        ans += mn;
        mp[c] -= mn;
        mp[toupper(c)] -= mn;
    }
    for (int c = 'a'; c <= 'z'; c++)
    {
        int mx = max(mp[c], mp[toupper(c)]);
        int pi = min(k, mx / 2);
        ans += pi;
        k -= pi;
    }

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