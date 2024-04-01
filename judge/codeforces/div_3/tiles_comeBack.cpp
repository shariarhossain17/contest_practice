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
    int n, k;
    cin >> n >> k;

    vi v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = -1;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[0] == v[i])
            cnt++;

        if (cnt == k)
        {
            l = i;
            cnt = 0;
            break;
        }
    }

    int r = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[n - 1] == v[i])
            cnt++;

        if (cnt == k)
        {
            r = i;
            break;
        }
    }

    if (l == -1 or r == -1 or (v[0] != v[n - 1] && l > r))
        No;
    else
        Yes;
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