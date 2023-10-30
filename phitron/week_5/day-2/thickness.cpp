#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int s = 0, ans = n + 1;
    for (int i = 1; i <= n; i++)
    {
        s += a[i];
        int j = i + 1, tmp = i, cnt = 0, sum = 0;

        while (j <= n)
        {
            sum += a[j];
            cnt++;
            if (sum == s)
            {
                tmp = max(tmp, cnt);
                cnt = 0;
                sum = 0;
            }
            j++;
        }
        if (sum == 0)
            ans = min(ans, tmp);
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