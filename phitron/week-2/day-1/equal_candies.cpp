#include <bits/stdc++.h>
using namespace std;

void solve(int n, int ar[])
{
    int min_num = 1e9 + 5;

    for (int i = 0; i < n; i++)
    {
        min_num = min(min_num, ar[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i] - min_num;
    }

    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        solve(n, ar);
    }
    return 0;
}