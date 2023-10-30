#include <bits/stdc++.h>
using namespace std;

bool isValid(int ar[], int n, int c, int mid)
{
    int cnt = 1;
    int last = 0;

    for (int i = 1; i < n; i++)
    {
        if (abs(ar[i] - ar[last]) >= mid)
        {
            cnt++;
            last = i;
        }
    }

    return cnt >= c;
}

void solve()
{

    int n, c;
    cin >> n >> c;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);
    int l = 0;
    int r = ar[n - 1] - ar[0];
    int ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isValid(ar, n, c, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
