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

    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int row = 0, col = 0;

    for (int i = 0; i < n; i++)
    {
        bool f = true;
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 1)
            {
                f = false;
                break;
            }
        }
        if (f)
            row++;
    }
    for (int i = 0; i < m; i++)
    {
        bool f = true;
        for (int j = 0; j < n; j++)
        {
            // if (ar[j][i] == 1)
            // {
            //     f = false;
            //     break;
            // }

            cout << ar[j][i] << " ";
        }
        if (f)
            col++;

        newLine;
    }

    // if (min(row, col) % 2)
    //     cout << "Ashish\n";
    // else
    //     cout << "Vivek\n";
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