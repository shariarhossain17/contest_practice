#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n";
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

    if (s.size() <= 10)
    {
        cout << s;
        newLine;
    }
    else
    {
        cout << s[0] << s.size() - 2 << s[s.size() - 1];
        newLine;
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