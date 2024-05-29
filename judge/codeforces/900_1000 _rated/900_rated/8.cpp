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

    vi v(m);
    array_input_int(v, 0, m);

    sort(v.begin(), v.end());

    int mn = INT_MAX;
    for (int i = 0; i + n <= m; i++)
    {
        if (i + n - 1 >= m)
            break;

        mn = min(mn, v[i + n - 1] - v[i]);
    }

    cout << mn;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}