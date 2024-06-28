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
    int n, l;
    cin >> n >> l;

    vi v(n);
    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    int d = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        d = max(v[i] - v[i - 1], d);
    }

    double nd = (double)d / 2;

    double ans = nd;

    ans = max(ans, (double)v[0] - 0);
    ans = max(ans, (double)l - v[n - 1]);
 
    cout << fixed << setprecision(10) << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}