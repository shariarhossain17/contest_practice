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
    int n;
    cin >> n;
    vi v(n);

    array_input_int(v, 0, n);

    int ans = 0;

    for (int i = 1; i < n; i++)
        ans = max(v[i] - v[i - 1], ans);

    int at = INT_MAX;
    for (int i = 0; i < n - 2; i++)
    {
        at = min(v[i + 2] - v[i], at);
    }

    cout << max(at, ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}