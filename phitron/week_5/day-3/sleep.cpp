#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, m;
    cin >> n >> h >> m;

    int ans = 100000;

    while (n--)
    {
        int hh, mm;
        cin >> hh >> mm;

        int a = h, b = m;
        int totm = 0;

        while (a != hh or b != mm)
        {
            b++;
            totm++;

            if (b == 60)
            {
                b = 0;
                a++;

                if (a == 24)
                    a = 0;
            }
        }

        ans = min(ans, totm);
    }

    cout << ans / 60 << " " << ans % 60 << "\n";
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