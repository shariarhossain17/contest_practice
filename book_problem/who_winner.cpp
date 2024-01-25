#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ar[10];

    for (int i = 0; i < 10; i++)
    {
        ar[i] = 0;
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;

        ar[id - 1]++;
    }

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }

    cout << max;

    return 0;
}