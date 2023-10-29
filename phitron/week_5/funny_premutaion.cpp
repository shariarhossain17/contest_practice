#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "-1\n";
    }
    else
    {
        cout << n << " " << n - 1 << " ";
        for (int i = 1; i < n - 1; i++)
            cout << i << " ";
        cout << "\n";
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