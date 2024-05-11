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

    int n = s.size();

    set<char> unique;

    for (int i = 0; i < s.size(); i++)
    {
        unique.insert(s[i]);
    }

    if (unique.size() == 1)
    {

        No;
    }
    else
    {
        Yes;
        if (n == 2 && s[0] == s[1])
        {
            cout << s[1] << " " << s[0];
        }

        else
        {
            cout << s.substr(1) << s[0] << endl;
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