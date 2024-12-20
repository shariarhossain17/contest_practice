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
    char str[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cin >> str[i][j];
    }

    bool flag = false;

    for (int i = 0; i < 8; i++)
    {
        if (str[0][i] == 'B' and !flag)
        {
            int cnt = 0;
            for (int j = 0; j < 8; j++)
            {
                if (str[j][i] == 'B')
                    cnt++;
            }

            if (cnt == 8)
            {

                flag = true;
            }
        }
    }

    if (flag)
        cout << "B\n";
    else
        cout << "R\n";
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