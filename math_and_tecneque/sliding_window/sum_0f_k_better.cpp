#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int i = 0, j = 0;

    int sum = 0;
    while (j < n)
    {
        sum += ar[j];

        if (j >= k - 1)
        {

            cout << sum << endl;

            sum -= ar[i];

            i++;
        }

        j++;
    }

    return 0;
}