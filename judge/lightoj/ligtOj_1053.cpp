#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{

    int n = 3;
    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + 3);

    int right = ar[2] * ar[2];

    int left = ar[0] * ar[0] + ar[1] * ar[1];

    if (right == left)
    {
        cout << "Case " << t << ": "
             << "yes"
             << "\n";
    }

    else
    {
        cout << "Case " << t << ": "
             << "no"
             << "\n ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cnt++;
        solve(cnt);
    }
    return 0;
}