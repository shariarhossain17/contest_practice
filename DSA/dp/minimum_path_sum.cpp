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

int f(int i, int j, vector<vector<int> > &matrix,vector<vector<int> > &dp) {


    if(i==0 and j==0)return matrix[0][0];
    if(i<0 or j<0)return INT_MAX;


    if(dp[i][j]!=-1)return dp[i][j];


    int up = f(i - 1, j, matrix,dp);
    int left = f(i, j - 1, matrix,dp);


    return dp[i][j]=matrix[i][j] + min(up, left);
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int> > matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    //  vector<vector<int> > dp(n, vector<int>(m,-1));
//    vector<vector<int> > dp(n, vector<int>(m,0));
    // cout << f(n - 1, m - 1, matrix,dp);

vector<int>col(m,0);
    for(int i=0;i<n;i++){

        vector<int>tmp(m,0);
        for(int j=0;j<m;j++){


            if(i==0 and j==0)tmp[j]=matrix[i][j];  
            else {
                int right=INT_MAX;
                int up=INT_MAX;
                 if(i>0)up=col[j]+matrix[i][j];
                if(j>0)right=tmp[j-1]+matrix[i][j];
               

                tmp[j]=min(right,up);
            }

        }
      
        col=tmp;
       
    }
    cout<<col[m-1];
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