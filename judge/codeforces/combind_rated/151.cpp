#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int washes = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            if (m > 0)
            {
                m--;
            }
            else
            {
                washes++;
            }
        }
        else if (v[i] == 2)
        {
            if (k > 0)
            {
                k--;
            }
            else if (m > 0)
            {
                m--;
            }
            else
            {
                washes++;
            }
        }
    }

    cout << washes << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
