

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

    int n, x;
    cin >> n >> x;

    vi v(n);

    array_input_int(v, 0, n);

    int e = 0;
    int o = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            e++;
        else
            o++;
    }

    for (int i = 1; i <= o; i += 2)
    {
        if (i + e >= x and i <= x)
        {
            Yes;
            return;
        }
    }
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