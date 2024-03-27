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

    vi v1(n), v2(m);

    array_input_int(v1, 0, n);
    array_input_int(v2, 0, m);

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int s = 0;

    ll ans = 0;

    while (v1.size())
    {
        ll a = abs(v1[0] - v2[v2.size() - 1]);
        ll b = abs(v2[0] - v1[v1.size() - 1]);
        ans += max(a, b);

        if (a > b)
        {
            v1.erase(v1.begin());
            v2.pop_back();
        }
        else
        {
            v2.erase(v2.begin());
            v1.pop_back();
        }
    }

    cout << ans << endl;
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