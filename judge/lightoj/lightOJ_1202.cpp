#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    int r1, c1, r2, c2;

    cin >> r1 >> c1 >> r2 >> c2;

    r1 = abs(r1 - r2);
    c1 = abs(c1 - c2);

    if (r1 == c1)
        cout << "Case " << t << ": "
             << "1\n";
    else
    {
        if ((r1 % 2 == 0) == (c1 % 2 == 0))
        {
            cout << "Case " << t << ": "
                 << "2\n";
        }
        else
        {
            cout << "Case " << t << ": "
                 << "impossible\n";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    int t;
    cin >> t;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }

    return 0;
}