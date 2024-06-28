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

    int ans = INT_MIN;

    ans = max((a * b) + c, ans);
    ans = max((a * c) + b, ans);
    ans = max((b * c) + a, ans);
    ans = max((b + c) * a, ans);
    ans = max((a + b) * c, ans);
    ans = max(a * b * c, ans);
    ans = max(a + b + c, ans);

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}