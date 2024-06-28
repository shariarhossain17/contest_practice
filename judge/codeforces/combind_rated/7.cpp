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

    vi v(n);
    array_input_int(v, 0, n);

    if (n > m)
    {
        No;
        return;
    }

    sort(v.begin(), v.end(), greater<int>());

    int marked = m - v[0];

    int cur = 0;

    bool f = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 1)
        {
            if (cur + v[i] >= m)
            {
                f = false;
                break;
            }
        }
        else
        {
            cur += (1 + v[i]);
            if (cur >= marked)
            {
                f = false;
                break;
            }
        }
    }

    if (f)
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