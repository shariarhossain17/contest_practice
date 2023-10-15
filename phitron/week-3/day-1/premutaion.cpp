#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ar[n][n];

    map<int, int> mp;
    map<int, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        mp[ar[i][n - 1]] = i;
        mp[ar[i][n - 1]]++;
    }

    int idx = 0, val;
    for (auto u : m)
    {
        if (u.second == 1)
            idx = u.first;
        else
            val = u.first;
    }

    for (int i = 1; i < n; i++)
    {
        cout << ar[mp[idx]][i] << " ";
    }
    cout << val;
    cout << endl;
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