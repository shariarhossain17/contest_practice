#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{

    int n, q;
    cin >> n >> q;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        int ans = INT_MAX;

        for (int j = a - 1; j < b; j++)
        {
            if (ar[j] < ans)
            {
                ans = ar[j];
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int cnt = 0;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }

    return 0;
}