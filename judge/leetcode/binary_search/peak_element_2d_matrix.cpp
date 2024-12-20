#include <bits/stdc++.h>
using namespace std;
#include<iostream>
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

int binary_search(vector<vector<int> > &matrix, int row,  int low, int high){


    while (low<=high)
    {
        int mid=low+(high-low)/2;

        if(matrix[row][mid]>matrix[row][mid+1] and matrix[row][mid]>matrix[row][mid-1] and matrix[row][mid]>matrix[row+1][mid] and matrix[row][mid]>matrix[row-1][mid]){
          return mid;
        }
        else if(matrix[row][mid]>matrix[row][mid+1] and matrix[row][mid]<matrix[row][mid-1]){
            high=mid-1;
        }
        else {
            low=mid+1;
        }

    }

    return -1;
    
}
void solve()
{
     int n, m ;
    cin >> n >>m;

    vector<vector<int> > matrix(n, vector<int>(m,-1));

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < n-1; j++)
        {

            cin >> matrix[i][j];
        }
    }


    bool f=true;
    for(int i=1;i<n-1;i++){
        int v=binary_search(matrix,i,1,m-1);
        if(v!=-1){
            cout<<i-1<<" "<<v-1;
            f=false;
            break;
        }
    }

    if(f)cout<<"0 0";
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