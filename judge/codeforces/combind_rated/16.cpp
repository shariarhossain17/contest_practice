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

    string s2 = s;

    reverse(s2.begin(), s2.end());

    if (s2 == s)
    {
        char c = s[0];

        for (int i = 1; i < s.size(); i++)
        {
            s[i - 1] = s[i];
        }

        // s += c;

        if (s == s2)
            cout << "-1\n";
        else
            cout << s << endl;
    }
    else
        cout << s << endl;
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