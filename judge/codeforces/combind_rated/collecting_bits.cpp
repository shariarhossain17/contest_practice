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
    int k;
    cin >> k;

    vector<int> v(10, 0);

    char ar[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> ar[i][j];

            if (ar[i][j] == '.')
                continue;
            else
            {
                v[ar[i][j] - '0']++;
            }
        }
    }

    for (int i = 1; i < 10; i++)
    {
        if (v[i] == 0)
            continue;
        else if (v[i] > k * 2)
        {

            No;
            return;
        }
    }

    Yes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}