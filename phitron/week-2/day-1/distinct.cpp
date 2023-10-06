#include <bits/stdc++.h>
using namespace std;

const int int_max = 1e4 + 5;
void solve()
{
    int n;
    cin >> n;
    int ar[n];

    int count[int_max] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        count[ar[i]]++;
    }

    for (int num : ar)
    {
        if (count[num] > 1)
            count[num]--;
    }

    int cnt = 0;
    for (int i = 0; i < int_max; i++)
    {

        if (count[i] == 1)
            cnt++;
    }

    cout << cnt;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}