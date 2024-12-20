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
    ll n, k, x;
    cin >> n >> k >> x;

    vi v(n);
    array_input_int(v, 0, n);

    sort(v.begin(), v.end(), greater<ll>());

    vector<ll> prefix(n, 0);
    prefix[0] = v[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + v[i];

    ll ans = LLONG_MIN;

    for (int i = 0; i <= k; i++)
    {
        ll current_sum = prefix[n - 1] - 2 * prefix[min(i + x - 1, n - 1)];
        if (i > 0)
            current_sum += prefix[i - 1];
        ans = max(ans, current_sum);
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
