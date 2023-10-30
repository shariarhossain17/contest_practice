#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, ans;
    int n;
    cin >> n >> s;
    for (auto &c : s)
        c -= '0';
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n and s[i + 2] == 0 and !(i + 3 < n and s[i + 3] == 0))
        {
            ans += 'a' + (s[i] * 10 + s[i + 1] - 1);
            i += 2;
        }
        else
        {
            ans += 'a' + (s[i] - 1);
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
