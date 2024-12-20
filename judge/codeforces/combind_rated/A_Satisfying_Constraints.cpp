#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll L = 1, R = 1e9;
        set<ll> not_equal;

        for (int i = 0; i < n; ++i)
        {
            int a;
            ll x;
            cin >> a >> x;

            if (a == 1)
            {
                L = max(L, x);
            }
            else if (a == 2)
            {
                R = min(R, x);
            }
            else if (a == 3)
            {
                not_equal.insert(x);
            }
        }
        ll count = max(0LL, R - L + 1);

        for (ll val : not_equal)
        {
            if (L <= val && val <= R)
            {
                count--;
            }
        }

        cout << count << newLine;
    }
    return 0;
}
