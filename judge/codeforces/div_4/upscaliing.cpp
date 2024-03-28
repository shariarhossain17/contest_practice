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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c = 2;
        char hash = '#';
        char dot = '.';

        if (i % 2 == 1)
        {
            hash = '.';
            dot = '#';
        }

        for (int k = 0; k < 2; k++)
        {
            for (int j = 0; j < n; j++)
            {

                for (int l = 0; l < 2; l++)
                {
                    if ((j & 1))
                    {
                        cout << dot;
                    }
                    else
                    {
                        cout << hash;
                    }
                }
            }
            newLine;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
