#include <bits/stdc++.h>
using namespace std;

#define newLine cout << "\n"

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

    for (int i = 1; i < 7; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (ar[i][j] == '#')
            {

                if (ar[i - 1][j - 1] == '#' && ar[i - 1][j + 1] == '#' &&
                    ar[i + 1][j - 1] == '#' && ar[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << "\n";
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
