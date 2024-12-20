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

int make_possible_pair(vector<int> &ar, int n)
{

    vector<int> dp(n, 0);
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] < i + 1)
        {

            cnt += dp[ar[i] - 1];
        }

        if (i + 1 < ar[i])
        {
            dp[i] = 1;
        }

        if (i > 0)
        {
            dp[i] += dp[i - 1];
        }
    }

    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    vi ar;

    ll ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x < i)
        {
            ll xx = lower_bound(ar.begin(), ar.end(), x) - ar.begin();
            ans += xx;
            ar.pb(i);
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
