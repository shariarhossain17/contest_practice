#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n;
    cin >> k >> n;
    int cur = 1, dif = 1;
    for (int i = 1; i <= k; i++)
    {
        cout << cur << " ";
        int next_elm = cur + dif;
        int rem = k - i - 1;
        if (next_elm + rem <= n)
        {
            cur = next_elm;
            dif++;
        }
        else
        {
            cur++;
        }
    }
    cout << endl;
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