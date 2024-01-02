#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;

    if (n > 10)
    {
        v.push_back(10);
        v.push_back(n - 10);
    }
    else
    {
        v.push_back(0),
            v.push_back(n);
    }

    for (int i : v)
        cout << i << " ";

    cout << "\n";
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