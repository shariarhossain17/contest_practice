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
    int n, x, y;
    cin >> n >> x >> y;

    int cnt = 0;
    int ans = 1;

    if (x == 0 and y == 0 or (x > 0 and y > 0))
    {
        cout << "-1\n";
        return;
    }

    int v = (x == 0) ? y : x;

    if ((n - 1) % v != 0)
    {
        cout << "-1\n";
        return;
    }

    {
        for (int i = 1; i <= n - 1; i++)
        {

            if (cnt >= abs(x - y))
            {
                ans = i + 1;
                cnt = 0;
            }

            cout << ans << " ";

            cnt++;
        }

        newLine;
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