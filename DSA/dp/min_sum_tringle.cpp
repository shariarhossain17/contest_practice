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

int minimum_path(int i, int j, int n, vector<vector<int> >& v,vector<vector<int> >& dp) {
    if (i >= n) return v[i-1][j-1];  
    if (j >= v[i].size()) return INT_MAX; 

    if(dp[i][j]!=-1)return dp[i][j];


    int down = minimum_path(i + 1, j, n, v,dp) + v[i][j];
    int down_right = minimum_path(i + 1, j + 1, n, v,dp) + v[i][j];
    return dp[i][j]=min(down, down_right);
}


void solve()
{

    int n;
    cin >> n;

    vector<vector<int> >v(n,vector<int>());


    for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
      
    }

    // for(int i=0;i<n;i++){

    //     for(int j=0;j<=i;j++){
    //        cout<<v[i][j]<<" ";
    //     }
    //     newLine;
    // }

        // vector<vector<int> > dp(n, vector<int>(n, -1));

    // cout<<minimum_path(0,0,n,v,dp);  
    vector<vector<int> > dp(n, vector<int>(n,0));

      for (int j = 0; j < n; j++) {
        dp[n - 1][j] = v[n - 1][j];
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
      int down = v[i][j] + dp[i + 1][j];
            int diagonal = v[i][j] + dp[i + 1][j + 1];

            dp[i][j] = min(down, diagonal);
        }
    }

    cout<<v[0][0]+dp[0][0];

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