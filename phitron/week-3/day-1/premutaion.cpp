#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][n - 1];
    map<int, int> m;
    int c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
            if (j == n - 2)
            {
                if (m[arr[i][j]] >= 1)
                    c = arr[i][j];

                m[arr[i][j]]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][n - 2] != c)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << arr[i][j] << " ";
            }
            break;
        }
    }
    cout << c << endl;
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