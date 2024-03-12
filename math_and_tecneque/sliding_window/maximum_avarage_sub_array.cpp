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
        cin >> v[i];

    int i = 0, j = 0, s = 0, mx = INT_MIN;

    while (j < v.size())
    {

        s += v[j];
        if (j >= k - 1)
        {

            mx = max(mx, s);

            s -= v[i];

            i++;
        }

        j++;
    }

    double ans = double(mx) / (double)k;

    cout << ans;

    return 0;
}