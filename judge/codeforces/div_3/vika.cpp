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
    int n, m;
    cin >> n >> m;

    char s[24][24];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            s[i][j] = c;
        }
    }

    int cnt = 0;
    string t = "vika";

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == t[cnt])
            {
                cnt++;
                break;
            }
        }
    }

    if (cnt >= 4)
        Yes;
    else
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