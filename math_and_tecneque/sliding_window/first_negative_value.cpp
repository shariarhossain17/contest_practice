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

    queue<int> q;

    int i = 0, j = 0;

    while (j < n)
    {
        if (ar[j] < 0)
            q.push(ar[j]);

        if (j >= k - 1)
        {
            if (!q.empty())
                cout << q.front();
            else
                cout << 0;

            if (ar[i] < 0)
                q.pop();

            i++;
        }
        j++;
    }

    return 0;
}