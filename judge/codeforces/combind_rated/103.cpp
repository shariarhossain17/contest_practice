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
    int r, c;
    cin >> r >> c;

    vector<vector<char>> arr(r, vector<char>(c));

    int w = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) // Here it should be j++
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'W')
                w++;
        }
    }

    if (w == 0)
    {

        cout << "Yes\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                if (arr[i][j] == '.')
                    cout << "D";
                else
                    cout << arr[i][j];
            }
            cout << "\n";
        }
        return;
    }

    bool flag = true;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == '.')
            {
                if ((i + 1 < r && arr[i + 1][j] == 'W') || (i - 1 >= 0 && arr[i - 1][j] == 'W') ||
                    (j + 1 < c && arr[i][j + 1] == 'W') || (j - 1 >= 0 && arr[i][j - 1] == 'W'))
                {
                    arr[i][j] = 'D';
                }
            }

            else if (arr[i][j] == 'S')
            {
                if ((i + 1 < r && arr[i + 1][j] == 'W') || (i - 1 >= 0 && arr[i - 1][j] == 'W') ||
                    (j + 1 < c && arr[i][j + 1] == 'W') || (j - 1 >= 0 && arr[i][j - 1] == 'W'))
                {
                    arr[i][j] = 'B';
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'B')
            {
                cout << "No";
                return;
            }
        }
    }

    cout << "Yes\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
