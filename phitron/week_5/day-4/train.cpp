#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int ar[n];
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]].push_back(i);
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        if (mp.find(a) == mp.end() || mp.find(b) == mp.end() || mp[a].empty() || mp[b].empty())
        {
            cout << "NO\n";
            continue;
        }

        if (a == b)
        {
            cout << "NO\n";
            continue;
        }

        if (mp[a].front() < mp[b].back())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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
