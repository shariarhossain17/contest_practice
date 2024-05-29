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
    array_input_int(v, 0, n);

    sort(v.begin(), v.end());
    int mx = 0, cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cnt++;
        if (i == n - 1 or v[i + 1] - v[i] > k)
        {
            mx = max(cnt, mx);
            cnt = 0;
        }
    }

    ans = n - mx;

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