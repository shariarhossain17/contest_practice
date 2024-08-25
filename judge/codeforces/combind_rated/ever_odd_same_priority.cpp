#include <bits/stdc++.h>
using namespace std;

#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define vi vector<int>
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    bool oddIndexParity = v[1] % 2;
    bool evenIndexParity = v[0] % 2;

    bool canMakeSameParity = true;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v[i] % 2 != evenIndexParity)
            {
                canMakeSameParity = false;
                break;
            }
        }
        else
        {
            if (v[i] % 2 != oddIndexParity)
            {
                canMakeSameParity = false;
                break;
            }
        }
    }

    if (canMakeSameParity)
        Yes;
    else
        No;
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
