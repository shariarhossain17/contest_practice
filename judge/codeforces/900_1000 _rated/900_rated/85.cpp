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
    ll a, b, c;
    cin >> a >> b >> c;

    ll mini = min(a, min(b, c));

    bool ok = true;

    if ((a % mini) != 0 and (b % mini) != 0 and (c % mini) == 0)
    {
        cout << "NO\n";
        return;
    }

    int cnt = 0;

    while (a != mini)
    {
        if (cnt > 3 or a % mini != 0)
        {
            ok = false;
            break;
        }
        a -= mini;
        cnt++;
    }
    while (c != mini)
    {
        if (cnt > 3 or c % mini != 0)
        {
            ok = false;
            break;
        }
        c -= mini;
        cnt++;
    }
    while (b != mini)
    {
        if (cnt > 3 or b % mini != 0)
        {
            ok = false;
            break;
        }
        b -= mini;
        cnt++;
    }

    if (ok and cnt <= 3)
        Yes;
    else
        No;
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