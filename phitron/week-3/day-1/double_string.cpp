#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);

    map<string, bool> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 1; j < v[i].size(); j++)
        {
            string s1 = v[i].substr(0, j);
            string s2 = v[i].substr(j);

            if (mp[s1] && mp[s2])
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? 1 : 0);
    }
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
