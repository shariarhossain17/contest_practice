#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
    }

    int values = v[0];

    for (int i = 1; i < n; i++)
    {
        values ^= v[i];
    }

    int ans = 0;

    while (values != 0 || k != 0)
    {
        int a = values & 1;
        int b = k & 1;

        if (a != b)
        {
            ans++;
        }

        values >>= 1;
        k >>= 1;
    }

    cout << ans;

    return 0;
}
