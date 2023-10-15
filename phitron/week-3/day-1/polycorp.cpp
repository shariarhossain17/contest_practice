#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string pi = "3141592653589793238462643383279";
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != pi[i])
            break;
        else
            ans++;
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