#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int q;
    cin >> q;
    while (q--)
    {
        int i, j;
        cin >> i >> j;

        int sum = 0;
        for (int k = i; k <= j; k++)
        {
            sum += ar[k];
        }

        cout << sum << endl;
    }
    return 0;
}