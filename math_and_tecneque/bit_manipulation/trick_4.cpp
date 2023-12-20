#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // set bit count

    int n;
    cin >> n;

    int ans = 0;

    while (n > 0)
    {
        ans += n & 1;
        n = n >> 1;
    }

    cout << ans;

    return 0;
}