#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int x = 0;
    int y = 0;

    int position = 0;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            x |= (1 << position);
        }
        n /= 2;
        position += 1;
    }

    y = ~x;

    cout << x << " " << y << endl;
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
