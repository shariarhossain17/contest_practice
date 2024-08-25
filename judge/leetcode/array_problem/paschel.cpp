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

// brute force for version 1 print number of row and col value

// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }

// optimal

ll ncr(int row, int col)
{
    ll n = 1;

    for (int i = 0; i < col; i++)
    {
        n = n * (row - i);
        n = n / (i + 1);
    }

    return n;
}

// void solve1()
// {
//     int row, col;
//     cin >> row >> col;

//     cout << ncr(row - 1, col - 1);
// }

//  version 2 print row and column using brute force

// long long factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     return n * factorial(n - 1);
// }
//  version 2 print row and column using better
ll ncr(ll row, ll col)
{
    ll n = 1;

    for (int i = 0; i < col; i++)
    {
        n = n * (row - i);
        n = n / (i + 1);
    }

    return n;
}

// void solve2()
// {
//     int row;
//     cin >> row;

//     for (int i = 1; i <= row; i++)
//     {

//         cout << ncr(row - 1, i - 1) << " ";
//     }
//     cout << endl;
// }

// version 3 print all paschal

void solve3()
{
    int n;

    cin >> n;

    vector<vector<int>> ans(n);

    for (int i = 1; i <= n; i++)
    {
        ans[i - 1].resize(i);
        for (int j = 1; j <= i; j++)
        {

            ans[i - 1][j - 1] = ncr(i - 1, j - 1);
        }
    }

    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        newLine;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve3();

    return 0;
}