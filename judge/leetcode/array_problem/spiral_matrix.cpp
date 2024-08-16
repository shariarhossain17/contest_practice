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

    int top = 0, right = m - 1, bottom = n - 1, left = 0;

    vector<int> matrix;
    while (top <= bottom and left <= right)
    {
        for (int i = top; i <= right; i++)
        {
            matrix.push_back(ar[top][i]);
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {

            matrix.push_back(ar[i][right]);
        }

        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {

                matrix.push_back(ar[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {

                matrix.push_back(ar[i][left]);
            }
            left++;
        }
    }

    for (int i : matrix)
        cout << i << " ";
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
