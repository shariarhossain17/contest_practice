#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int i = 0, j = 0, s = 0;

    while (j < n)
    {
        s += ar[j];
        if (j >= k - 1)
        {

            cout << s << endl;

            s -= ar[j];
            i++;
        }
        j++;
    }

    return 0;
}