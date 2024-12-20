#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    ll ans = a;

    bool f = false;

    if (b % 3 == 0)
    {
        ans += (b / 3);
        ans += (c + 3 - 1) / 3;

        cout << ans << endl;

        return;
    }
    else
    {
        while (c)
        {
            b += 1;
            c--;

            if (b % 3 == 0)
            {

                f = true;
                ans += (b / 3);
                break;
            }
        }
        }

    ans += (c + 3 - 1) / 3;
    if (!f)
        cout << "-1\n";
    else
        cout << ans << "\n";
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