#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int ans = INT_MIN;
    for (int s = 1; s <= 100; ++s)
    {
        int cnt = 0;
        int i = 0, j = n - 1;

        while (i < j)
        {
            if (v[i] + v[j] > s)
            {
                j--;
            }
            else if (v[i] + v[j] < s)
            {
                i++;
            }
            else
            {
                cnt++;
                i++;
                j--;
            }
        }
        ans = max(cnt, ans);
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