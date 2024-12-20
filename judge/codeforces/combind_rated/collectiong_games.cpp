#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define pii pair<ll, int>
#define ff first
#define ss second
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n;
    cin >> n;

    vector<pii> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].ff;
        arr[i].ss = i;
    }
    sort(arr.begin() + 1, arr.begin() + n + 1);

    vi nxt(n + 1, 0);
    vector<ll> sum(n + 1, 0);
    vi ans(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (nxt[i - 1] >= i)
        {
            nxt[i] = nxt[i - 1];
            sum[i] = sum[i - 1];
        }
        else
        {
            sum[i] = sum[i - 1] + arr[i].ff;
            nxt[i] = i;
            while (nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].ff)
            {
                nxt[i]++;
                sum[i] += arr[nxt[i]].ff;
            }
        }
        ans[arr[i].ss] = nxt[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] - 1 << " ";
    }
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
