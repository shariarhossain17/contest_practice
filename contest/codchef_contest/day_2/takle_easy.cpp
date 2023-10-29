#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    int x = sum / n;

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (x % 2 != ar[i] % 2)
        {
            flag = false;
            break;
        }
    }

    if (sum != (x * n))
        flag = false;

    if (flag)
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