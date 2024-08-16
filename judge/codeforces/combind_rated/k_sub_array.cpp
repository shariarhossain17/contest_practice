#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int segments = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            segments++;
        }
    }

    if (segments <= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
