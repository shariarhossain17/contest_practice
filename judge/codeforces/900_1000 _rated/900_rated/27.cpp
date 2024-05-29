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
    int r = 0, b = 0;
    bool flag = false;
    char ar[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ar[i][j];
        }
    }

    char ans;

    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (ar[i][j] == 'R')
            {
                cnt++;
            }
        }
        if (cnt == 8)
            ans = 'R';
    }

    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (ar[j][i] == 'B')
            {
                cnt++;
            }
        }
        if (cnt == 8)
            ans = 'B';
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