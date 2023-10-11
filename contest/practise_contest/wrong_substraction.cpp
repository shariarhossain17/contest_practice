#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n;
}
int main()
{
    solve();
    return 0;
}