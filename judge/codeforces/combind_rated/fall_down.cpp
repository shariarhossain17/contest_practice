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

bool filled_column(int i, int j, vector<vector<char>> &ar, int n)
{
    for (int k = i; k < n; k++)
    {
        if (ar[k][j] == 'o')
        {
            return false;
        }
        else if (ar[k][j] == '.')
        {
            ar[k][j] = '*';
            return true;
        }
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> ar(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == '*')
            {
                if (filled_column(i, j, ar, n))

                {
                    ar[i][j] = '.';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j];
        }
        newLine;
    }
    newLine;
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
