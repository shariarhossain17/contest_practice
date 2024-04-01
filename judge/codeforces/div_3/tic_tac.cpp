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

bool allCharSame(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}
void solve()
{
    string a, b, c;
    vector<char> vct = {'X', 'O', '+'};
    cin >> a >> b >> c;
    char ans = '?';
    for (char x : vct)
    {
        if (a[0] == x && a[1] == x && a[2] == x)
        {
            ans = x;
        }
        if (b[0] == x && b[1] == x && b[2] == x)
        {
            ans = x;
        }
        if (c[0] == x && c[1] == x && c[2] == x)
        {
            ans = x;
        }
        if (a[0] == x && b[0] == x && c[0] == x)
        {
            ans = x;
        }
        if (a[1] == x && b[1] == x && c[1] == x)
        {
            ans = x;
        }
        if (a[2] == x && b[2] == x && c[2] == x)
        {
            ans = x;
        }
        if (a[0] == x && b[1] == x && c[2] == x)
        {
            ans = x;
        }
        if (a[2] == x && b[1] == x && c[0] == x)
        {
            ans = x;
        }
    }
    if (ans == '?')
    {
        cout << "DRAW\n";
    }
    else
    {
        cout << ans << "\n";
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