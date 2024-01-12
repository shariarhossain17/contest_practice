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

    cout << "Case " << t << ":"
         << "\n";
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;
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