#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{

    int w;
    cin >> w;
    long long n, m;

    if ((w & 1) == 0)
    {
        n = w / 2;
        m = 2;

        while ((n & 1) == 0)
        {
            n = n / 2;
            m = m * 2;
        }
        cout << "Case " << t << ": " << n << " " << m << "\n";
    }
    else
    {
        cout << "Case " << t << ": "
             << "Impossible\n";
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