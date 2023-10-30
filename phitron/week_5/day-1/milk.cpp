#include <bits/stdc++.h>
using namespace std;

bool isValid(int ar[], int n, int m, int mid)
{
    int cnt = 1;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (total + ar[i] <= mid)
        {
            total += ar[i];
        }
        else
        {
            cnt++;
            total = ar[i];
        }
    }

    return cnt <= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m)
    {
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = *max_element(a, a + n);
        int r = accumulate(a, a + n, 0);

        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (isValid(a, n, m, mid))
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
