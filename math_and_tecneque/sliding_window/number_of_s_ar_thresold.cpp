#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, t;
    cin >> n >> k >> t;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int i = 0, j = 0, s = 0, cnt = 0;

    while (j < v.size())
    {
        s += v[j];

        if (j >= k - 1)
        {

            if (s / k >= t)
                cnt++;

            s -= v[i];

            i++;
        }

        j++;
    }

    cout << cnt;

    return 0;
}