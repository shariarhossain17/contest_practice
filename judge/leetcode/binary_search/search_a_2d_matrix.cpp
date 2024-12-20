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

bool binary_search(vector<vector<int>> &matrix, int row, int t, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (matrix[row][mid] == t)
            return true;
        else if (matrix[row][mid] > t)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
void solve()
{
    int n, m, t;
    cin >> n >> m >> t;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> matrix[i][j];
        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){

    //        if(matrix[i][j]==t){
    //         cout<<"true";
    //         return;
    //        }
    //     }
    // }

    //  for(int i=0;i<n;i++){
    //     if(binary_search(matrix,i,t,0,m))cout<<"true";
    // }

    // cout<<"false";

    int low = 0, high = n * m - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int row = mid / m;
        int col = mid % m;

        if (matrix[row][col] == t)
        {
            cout << true;
            return;
        }
        else if (matrix[row][col] > t)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << "false";
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