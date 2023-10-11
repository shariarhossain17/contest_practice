#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char ar[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ar[i][j];
        }
    }

    int row, col;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (ar[i][j] == '#')
            {

                if (ar[i - 1][j - 1] == '#' && ar[i - 1][j + 1] == '#' && ar[i + 1][j - 1] == '#' && ar[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << '\n';
                    return;
                }
            }
        }
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