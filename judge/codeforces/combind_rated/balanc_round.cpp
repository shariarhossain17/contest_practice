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

    vector<int> v(n);
    array_input_int(v, 0, n);
    vi dif(n, 0);

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        dif[i] = v[i] - v[i - 1];
    }

    int cnt = 0;

    int ans = -1;

    for (int i = 1; i < n; i++)
    {
        if (dif[i] <= k)
            cnt++;
        else
        {
            ans = max(ans, cnt + 1);
            cnt = 0;
        }
    }

    ans = max(ans, cnt + 1);

    cout << n - ans << endl;
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