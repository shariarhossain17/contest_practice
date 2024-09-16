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

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool l = true;

    while (l)
    {
        l = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int left = (j > 0) ? arr[i][j - 1] : 0;
                int right = (j < m - 1) ? arr[i][j + 1] : 0;
                int top = (i > 0) ? arr[i - 1][j] : 0;
                int bottom = (i < n - 1) ? arr[i + 1][j] : 0;

                int val = arr[i][j];

                if (val > top && val > bottom && val > left && val > right)
                {
                    int tb = max(top, bottom);
                    int lr = max(left, right);
                    arr[i][j] = max(tb, lr);
                    l = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        newLine;
    }
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