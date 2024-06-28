#include <bits/stdc++.h>
using namespace std;

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
    int n, t;
    cin >> n >> t;

    vi v(n - 1);

    array_input_int(v, 0, n - 1);

    int i = 0;

    while (i < n - 1)
    {
        if (i == (t - 1))
        {
            Yes;
            return;
        }

        i = v[i] + i;
    }

    if (i == (t - 1))
    {
        Yes;
    }
    else
    {
        No;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
