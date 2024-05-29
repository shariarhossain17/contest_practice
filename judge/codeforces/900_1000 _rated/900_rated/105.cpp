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
    ll a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    int ans = 1;

    if (b1 > a1 and c1 > a1)
    {
        ans += min(b1 - a1, c1 - a1);
    }
    if (b1 < a1 and c1 < a1)
    {
        ans += min(a1 - b1, a1 - c1);
    }
    if (b2 > a2 and c2 > a2)
    {
        ans += min(b2 - a2, c2 - a2);
    }
    if (b2 < a2 and c2 < a2)
    {
        ans += min(a2 - b2, a2 - c2);
    }

    cout << ans;
    newLine;
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
