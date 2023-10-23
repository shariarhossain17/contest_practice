#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int mini = 1e6;

    while (k--)
    {
        int sum = 0;
        int val = gcd(x, y);
        if (x > y)
        {
            x = val;
        }
        else
            y = val;

        sum += val;

        int lcm = x * y / val;
        if (x > y)
        {
            x = lcm;
        }
        else
            y = lcm;

        sum += lcm;

        mini = min(mini, lcm);
    }

    cout << mini * 2 << "\n";
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