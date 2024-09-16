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
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int ans = INT_MAX;

    ans = min(ans, abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3));
    ans = min(ans, abs(x2 - x1) + abs(x2 - x2) + abs(x2 - x3));
    ans = min(ans, abs(x3 - x1) + abs(x3 - x2) + abs(x3 - x3));

    cout << ans << endl;
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