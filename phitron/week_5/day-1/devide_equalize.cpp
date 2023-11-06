#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int l = 0;
    int r = INT_MAX;
    bool final_ans = false;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        double ans = 1.0;

        for (int i = 0; i < n; i++)
        {

            ans *= (ar[i] * 1.0 / mid);
        }

        if (fabs(ans - 1.0) < 1e-15)
        {
            final_ans = true;
            break;
        }
        else if (ans > 1.0)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (final_ans)
        cout << "YES\n";
    else
        cout << "NO\n";
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