#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    long long cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j)
            {
                string s1 = v[i];
                string s2 = v[j];

                if (s1 == s2)
                    continue;
                else
                {
                    for (int i = 0; i < 2; i++)
                    {
                        if (s1[i] == s2[i])
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;
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
