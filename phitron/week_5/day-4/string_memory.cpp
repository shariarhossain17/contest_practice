#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    set<char> ss;
    int ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        ss.insert(s[i]);

        if (ss.size() > 3)
        {
            ans++;
            ss.clear();
            ss.insert(s[i]);
        }
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
