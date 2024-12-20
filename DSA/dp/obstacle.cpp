#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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

// int f(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &matrix)
// {

//     if (i == 0 && j == 0)
//         return 1;

//     if (i < 0 || j < 0)
//         return 0;
//     if (matrix[i][j] == 1)
//         return 0;

//     if (dp[i][j] != -1)
//         return dp[i][j];

//     int l = f(i - 1, j, dp, matrix);
//     int r = f(i, j - 1, dp, matrix);

//     return dp[i][j] = l + r;
// }

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int> > matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // vector<vector<int> > dp(n, vector<int>(m, -1));
    // cout << f(n - 1, m - 1, dp,matrix) << "\n";

    // vector<vector<int> > dp(n, vector<int>(m, 0));

    vector<int> dp(m,0);

    for (int i = 0; i < n; i++)
    {

        vector<int> tmp(m,0);
        for (int j = 0; j < m; j++)
        {

            if (i == 0 && j == 0)
                tmp[j] = 1;

            else if (matrix[i][j] == 1)
            {
                tmp[j] = 0;
            }
            else
            {
                int r = 0, d = 0;

                if (i > 0)
                    d = dp[j];
                if (j > 0)
                    r = tmp[j - 1];

                tmp[j] = r + d;
            }
        }

        dp = tmp;
    }

 cout<<dp[m-1];
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
