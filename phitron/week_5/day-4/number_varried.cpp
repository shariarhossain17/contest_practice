#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 9; i >= 1; i--)
    {
        if (!n)
            break;

        if (n >= i)
        {
            v.push_back(i);
            n -= i;
        }
    }

    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
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