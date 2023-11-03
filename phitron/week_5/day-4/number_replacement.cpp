#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    string s;
    cin >> s;
    map<int, set<char>> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]].insert(s[i]);
    }

    for (auto m : mp)
    {
        if (m.second.size() > 1)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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