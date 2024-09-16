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

ll count_larger(int mid, vector<int> &a, vector<int> &b, int n)
{
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        count += a[i] >= mid ? (a[i] - mid) / b[i] + 1 : 0;
    }

    return count;
}

ll sum_ap(int cnt, int a, int b)
{
    int start = a - (cnt - 1) * b;

    return 1ll * cnt * (start + a) / 2;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vi a(n), b(n);
    array_input_int(a, 0, n);
    array_input_int(b, 0, n);

    int l = 0, r = 1e9 + 7;
    int valid_mid = l;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (count_larger(mid, a, b, n) >= k)
        {
            valid_mid = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    ll ans = 0;
    int t_count = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = a[i] > valid_mid ? (a[i] - valid_mid - 1) / b[i] + 1 : 0;
        t_count += cnt;
        ans += sum_ap(cnt, a[i], b[i]);
    }

    ans += 1ll * (k - t_count) * valid_mid;

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