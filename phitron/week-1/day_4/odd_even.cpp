#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int b = a % 2;

        v[i] = b;
    }

    int x = v[0], y = v[1];
    for (int i = 0; i < n; i = i + 2)
    {
        if (v[i] != x)
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 1; i < n; i = i + 2)
    {
        if (v[i] != y)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
