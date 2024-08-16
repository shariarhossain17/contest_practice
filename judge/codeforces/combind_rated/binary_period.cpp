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

bool isSame(string &s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[0] != s[i])
            return false;
    }
    return true;
}
void solve()
{
    string s;
    cin >> s;

    if (isSame(s))
    {
        cout << s << "\n";
    }
    else
    {
        if (s[0] == '1')
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << "10";
            }
            newLine;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << "01";
            }
            newLine;
        }
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