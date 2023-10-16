#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    string s1 = s;
    set<string> str;

    for (int i = 0; i < n - 1; i++)
    {
        if (i < s1.size() - 1)
        {
            s1.erase(i, 2);
            str.insert(s1);
        }
        s1 = s;
    }

    cout << str.size() << "\n";
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
