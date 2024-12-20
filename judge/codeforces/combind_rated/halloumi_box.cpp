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

    int n;
    cin >> n;

    string s;
    cin >> s;

    int u = 0, r = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U')
            u++;
        else if (s[i] == 'R')
            r++;
        else if (s[i] == 'L')
            r--;
        else
            u--;

        if (u == 1 and r == 1)
        {
            Yes;
            return;
        }
    }

    No;
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