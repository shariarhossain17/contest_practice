#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    string s;
    cin >> s;

    string cur;

    cur += s[0];

    vector<string> ans;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '0')
            cur += s[i];
        else
        {

            for (int j = 0; j < s.size() - i; j++)
            {
                cur += '0';
            }

            ans.push_back(cur);
            cur = s[i];
        }
    }

    ans.push_back(cur);

    cout << ans.size() << "\n";

    for (auto i : ans)
        cout << i << " ";
    newLine;
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