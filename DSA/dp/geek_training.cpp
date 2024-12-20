#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
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

// int geek_training(int days, int last, vector<vector<int>> &v, vector<vector<int>> &dp)
// {

    // memoization
    //  if (days == 0)
    //  {
    //      int maxi = -1;
    //      for (int i = 0; i < 3; i++)
    //      {
    //          if (i != last)
    //              maxi = max(maxi, v[0][i]);
    //      }
    //      return maxi;
    //  }

    // if (dp[days][last] != -1)
    //     return dp[days][last];

    // int maxi = -1;
    // for (int i = 0; i < 3; i++)
    // {
    //     if (i != last)
    //     {
    //         int staff = v[days][i] + geek_training(days - 1, i, v, dp);
    //         maxi = max(staff, maxi);
    //     }
    // }
    // return dp[days][last] = maxi;
// }

void solve()
{

    int n;
    cin >> n;

    vector<vector<int> > v(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }
    // vector<vector<int> > dp(n, vector<int>(4, -1));
    // // tabulation

    // dp[0][0] = max(v[0][1], v[0][2]);
    // dp[0][1] = max(v[0][0], v[0][2]);
    // dp[0][2] = max(v[0][0], v[0][1]);
    // dp[0][3] = max(v[0][0], max(v[0][1], v[0][2]));

    vector<int>dp(4,0);

    dp[0] = max(v[0][1], v[0][2]);
    dp[1] = max(v[0][0], v[0][2]);
    dp[2] = max(v[0][0], v[0][1]);
    dp[3] = max(v[0][0], max(v[0][1], v[0][2]));

    for (int i = 1; i < n; i++)
    {

        vector<int>tmp(4,0);
        for (int last = 0; last < 4; last++)
        {
            tmp[last] = 0;
            for (int task = 0; task < 3; task++)
            {
                if (task != last)
                {

                    int activity = v[i][task] + dp[task];

                  
                    tmp[last] = max(tmp[last], activity);

                    // dp[i][last]= max(dp[i][last], activity);
    
                }
            }

        }

    dp=tmp;
  
    }

    cout<<dp[3];
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