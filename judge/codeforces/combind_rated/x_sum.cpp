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

    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0;
            sum += ar[i][j];

            int cur_row = i - 1, cur_col = j - 1;
            while (cur_row >= 0 and cur_col >= 0)
            {
                sum += ar[cur_row][cur_col];
                cur_row--;
                cur_col--;
            }

            cur_row = i - 1, cur_col = j + 1;
            while (cur_row >= 0 and cur_col < m)
            {
                sum += ar[cur_row][cur_col];
                cur_col++;
                cur_row--;
            }

            cur_row = i + 1, cur_col = j - 1;
            while (cur_row < n and cur_col >= 0)
            {
                sum += ar[cur_row][cur_col];
                cur_col--;
                cur_row++;
            }

            cur_row = i + 1, cur_col = j + 1;
            while (cur_row < n and cur_col < m)
            {
                sum += ar[cur_row][cur_col];
                cur_col++;
                cur_row++;
            }

            ans = max(sum, ans);
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
