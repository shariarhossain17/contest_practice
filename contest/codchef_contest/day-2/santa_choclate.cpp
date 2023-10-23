#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        sum += v[i];
    }

    if (sum < n)
        cout << "NO\n";
    else
    {
        int rem = sum % n;

        if (k == 0 && rem != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
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
