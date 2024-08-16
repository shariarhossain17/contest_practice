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
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<string> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == '.')
            {
                if (j < m - 1 && ar[i][j + 1] == '.')
                {
                    ans += min(2 * x, y);
                    j++;
                }
                else
                {
                    ans += x;
                }
            }
        }
    }

    cout << ans << endl;
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
