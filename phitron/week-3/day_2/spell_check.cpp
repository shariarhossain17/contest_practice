#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string s1 = "Timru";

    if (s1.size() != n)
    {
        cout << "NO\n";
        return;
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s1[i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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