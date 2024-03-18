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
    vector<int> ar(n);

    array_input_int(ar, 0, n);

    vector<int> divisor;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            divisor.push_back(i);
    }
    ll ans = 0;

    sort(divisor.begin(), divisor.end());

    for (int s : divisor)
    {
        ll mx = 0, mn = LLONG_MAX;

        int cnt = 0;
        ll gain = 0;
        for (int i = 0; i < n; i++)
        {
            gain += ar[i];
            cnt++;
            if (cnt == s)
            {
                mx = max(mx, gain);
                mn = min(mn, gain);
                cnt = 0;
                gain = 0;
            }
        }

        ans = max(ans, mx - mn);
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