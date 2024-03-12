#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int mxX = INT_MIN, mnX = INT_MAX, mxY = INT_MIN, mnY = INT_MAX;

    for (int i = 1; i <= 4; i++)
    {
        int a, b;
        cin >> a >> b;

        mxX = max(mxX, a);
        mnX = min(mnX, a);

        mxY = max(mxY, b);
        mnY = min(mnY, b);
    }

    cout << (mxX - mnX) * (mxY - mnY) << "\n";
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