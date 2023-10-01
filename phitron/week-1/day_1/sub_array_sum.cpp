#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        int s = 0;
        for (int j = i; j < i + k; j++)
        {
            s += a[j];
        }
        mx = max(mx, s);
    }

    cout << mx;

    return 0;
}
