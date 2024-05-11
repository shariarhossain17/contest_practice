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

    int groups = 1;
    bool transition = false;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] != s[i])
        {
            groups++;
            if (s[i - 1] == '0' && s[i] == '1')
            {
                transition = true;
            }
        }
    }

    if (transition)
    {
        groups--;
    }

    cout << groups;
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