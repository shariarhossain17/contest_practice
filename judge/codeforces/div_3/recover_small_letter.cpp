#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (char a = 'a'; a <= 'z'; a++)
    {
        for (char b = 'a'; b <= 'z'; b++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                long long ss = a - 'a' + b - 'a' + c - 'a' + 3;

                if (ss == n)
                {
                    cout << a << b << c << "\n";
                    return;
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}