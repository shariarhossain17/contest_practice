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

    int z = 0, o = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            z++;
        else
            o++;
    }

    int x = min(z, o);

    if (x % 2 == 0)
        cout << "NET\n";
    else
        cout << "DA\n";
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