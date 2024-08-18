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

    int even = 0, ans = k;

    while (n--)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
            even++;

        if (x % k == 0)
            ans = 0;

        ans = min(ans, k - x % k);
    }

    if (k == 4)
    {
        if (even >= 2)
            cout << 0 << "\n";
        else if (even == 1)
            cout << min(ans, 1) << "\n";
        else
            cout << min(ans, 2) << endl;
    }
    else
    {
        cout << ans << endl;
    }
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