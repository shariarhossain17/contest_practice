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

int f(int i, int j, vector<vector<int> > &dp)
{
    if (i == 0 && j == 0)
        return 1;
    if (i == 1 & j == 1)
        return 0;
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int l = f(i - 1, j, dp);
    int r = f(i, j - 1, dp);

    return dp[i][j] = l + r;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    

    vector<vector<int> > dp(n, vector<int>(m, 0));
    cout << f(n - 1, m - 1, dp) << "\n";

    // tabulation

    // space optimization

    // vector<int>v(m,0);
    //     for(int i=0;i<n;i++){

    //         vector<int>tmp(m,0);
    //         for(int j=0;j<m;j++){

    //                 if(i==0 and j==0)tmp[j]=1;
    //                 else {
    //                     int up=0,down=0;

    //                     if(i>0)up=v[j];
    //                     if(j>0)down=tmp[j-1];

    //                     tmp[j]=up+down;

    //                 }

    //         }
    //         v=tmp;
    //     }

    //     cout<<v[m-1];
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
