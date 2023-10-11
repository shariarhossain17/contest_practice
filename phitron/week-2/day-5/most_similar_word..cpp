#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                int r = 0;
                for (int k = 0; k < m; k++)
                {

                    string s1 = v[i];
                    string s2 = v[j];
                    r += abs(s1[k] - s2[k]);
                }
                if (r < ans)
                {
                    ans = r;
                }
            }
        }
    }

    cout << ans << endl;
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
