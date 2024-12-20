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

int l_bound(vector<vector<int> > &v, int m, int t, int row)
{

    int low = 0;
    int high = m - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[row][mid] >= t)
        {

            ans = mid;
            high = mid - 1;
        }

        else
            low = mid + 1;
    }

    return ans;
}

int u_bound(vector<vector<int> > &v, int m, int t, int row)
{

    int low = 0;
    int high = m - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (v[row][mid] < t)
        {

            ans = mid;
            low = mid + 1;
        }

        else
            high = mid - 1;
    }

    return ans+1;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int> > v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    int ones = 0;
    int idx = -1;

    for (int i = 0; i < n; i++)
    {

        int o=u_bound(v, m, 1, i);

        cout<<o<<endl;

        if(o==-1)continue;

        int cnt = m-o;

        // for (int j = 0; j < m; j++)
        // {
        //     if (v[i][j] == 1)
        //         cnt++;
        // }



        if (cnt > ones)
        {
            idx = i;
            ones = cnt;
        }
    }

    cout << idx << endl;
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