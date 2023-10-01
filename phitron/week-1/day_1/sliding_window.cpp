#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long int i = 0, j = 0, s = 0;
    long long mx = INT_MIN;

    while (j < n)
    {
        s += a[j];
        if (j >= k - 1)
        {
            mx = max(mx, s);
            s -= a[i];
            i++;
        }
        j++;
    }

    cout << mx;
    return 0;
}