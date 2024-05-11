#include <bits/stdc++.h>
using namespace std;

void sieve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 0; i <= n; i++)
        v[i] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (v[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                v[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (v[i] == 0)
            cout << i << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    return 0;
}