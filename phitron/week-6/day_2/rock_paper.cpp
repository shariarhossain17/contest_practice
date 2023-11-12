#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R' && b[i] == 'S')
            x++;

        else if (a[i] == 'P' && b[i] == 'R')
            x++;
        else if (a[i] == 'S' && b[i] == 'P')
            x++;
        else if (a[i] == 'P' && b[i] == 'S')
            y++;
        else if (a[i] == 'R' && b[i] == 'P')
            y++;
        else if (a[i] == 'S' && b[i] == 'R')
            y++;
    }

    int p;

    if (y >= x)
    {
        p = (x + y) / 2;
        p++;
        cout << p - x << "\n";
    }
    else
        cout << "0" << endl;
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