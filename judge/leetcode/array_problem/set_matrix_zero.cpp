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

// void set_col_zero(vector<vector<int>> &ar, int n, int j)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (ar[i][j] != 0)
//             ar[i][j] = -1;
//     }
// }

// void set_row_zero(vector<vector<int>> &ar, int n, int i)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if (ar[i][j] != 0)
//             ar[i][j] = -1;
//     }
// }

// void solve()
// {
//     // brute force

//     int n, m;
//     cin >> n >> m;

//     vector<vector<int>> ar(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> ar[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (ar[i][j] == 0)
//             {
//                 set_row_zero(ar, n, i);
//                 set_col_zero(ar, m, j);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (ar[i][j] == -1)
//                 cout << 0 << " ";
//             else
//                 cout << ar[i][j] << " ";
//         }

//         newLine;
//     }
// }

// void solve()
// {

//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> ar(n, vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> ar[i][j];
//         }
//     }

//     vector<int> row(n, 0);
//     vector<int> col(m, 0);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (ar[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (row[i] || col[j])
//                 cout << 0 << " ";
//             else
//                 cout << ar[i][j] << " ";
//         }
//         newLine;
//     }
// }

// optimal
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> ar(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int col0 = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 0)
            {
                ar[0][i] = 0;

                if (j != 0)
                    ar[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (ar[i][j] != 0)
            {
                if (ar[i][0] == 0 or ar[0][j] == 0)
                {
                    ar[i][j] = 0;
                }
            }
        }
    }

    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            ar[i][0] = 0;
        }
    }

    if (ar[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            ar[0][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ar[i][j] << " ";
        }
        newLine;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
