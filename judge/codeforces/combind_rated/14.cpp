#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int cur = 1;
    ll ans = 0; // Use long long to handle large values

    for (int i = 0; i < m; i++)
    {
        if (cur > v[i])
        {
            ans += (n - cur) + v[i];
        }
        else
        {
            ans += (v[i] - cur);
        }
        cur = v[i];
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
