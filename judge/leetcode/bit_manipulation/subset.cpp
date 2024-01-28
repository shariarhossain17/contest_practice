#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int sum = 0;
    int size = 1 << n;
    for (int i = 1; i < size; i++)
    {
        int x = 0;
        for (int j = 0; j < n; j++)
        {

            if (i & (1 << j))
            {

                x = x ^ ar[j];
            }
        }

        sum += x;
    }

    cout << sum;

    return 0;
}
