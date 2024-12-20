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

int n, m;
vector<vector<char>> shape;

bool making_l_shapes(int i, int j)
{
    int cnt = 1;

    if (i + 1 < n && shape[i + 1][j] == '*')
        cnt++;
    if (i + 1 < n && j + 1 < m && shape[i + 1][j + 1] == '*')
        cnt++;
    if (i + 1 < n && j - 1 >= 0 && shape[i + 1][j - 1] == '*')
        cnt++;
    if (j + 1 < m && shape[i][j + 1] == '*')
        cnt++;
    return cnt == 3;
}

void solve()
{
    cin >> n >> m;
    shape.assign(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> shape[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (shape[i][j] == '*')
            {
                if (!making_l_shapes(i, j))
                {
                    No;
                    return;
                }
            }
        }
    }

    Yes;
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
