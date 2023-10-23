#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string T = "meow";
    for (int i = 0; i < n; i++)
    {
        if (s[i] <= 90)
            s[i] += 32;
    }
    string ss = "";

    for (int i = 0; i < n; i++)
    {
        if (ss.empty() or ss.back() != s[i])
        {
            ss.push_back(s[i]);
        }
    }

    if (ss == T)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
