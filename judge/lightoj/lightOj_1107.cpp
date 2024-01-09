#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int m;
    cin >> m;

    cout << "Case " << t << ":\n";
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x > 1 and y > y1 and x < x2 and y < y2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        };
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