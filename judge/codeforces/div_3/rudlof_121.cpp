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

    vi v(n);

    array_input_int(v, 0, n);

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] <= v[i + 1] && v[i] >= 2 * v[i - 1])
        {
            v[i + 1] -= v[i - 1];
            v[i] -= 2 * v[i - 1];
            v[i - 1] = 0;
        }
    }

    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            ans = false;
            break;
        }
    }

    if (ans)
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