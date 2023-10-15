#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ar[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }

        int ans = INT_MIN;
        int sum;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = ar[i][j];

                int x = j - 1;
                int y = j + 1;

                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += ar[k][x];
                        x--;
                    }

                    if (y < m)
                    {
                        sum += ar[k][y];
                        y++;
                    }
                }

                x = j - 1;
                y = j + 1;
                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += ar[k][x];
                        x--;
                    }

                    if (y < m)
                    {
                        sum += ar[k][y];
                        y++;
                    }
                }

                if (sum > ans)
                    ans = sum;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
