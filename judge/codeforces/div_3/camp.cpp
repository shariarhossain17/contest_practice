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

    vi v1(n), v2(n);

    array_input_int(v1, 0, n);
    array_input_int(v2, 0, n);

    int s = 0;
    int ans = INT_MAX;
    for (int i = n - 1; i >= 0; --i)
    {
        if (i + 1 <= m)
        {
            ans = min(ans, s + v1[i]);
        }

        s += min(v1[i], v2[i]);
    }

    cout << ans;
    newLine;
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