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
    int n, m;
    cin >> n >> m;

    int ans = INT_MAX;

    int itr = n / 2;

    if (n % 2 == 1)
        itr += 1;

    for (int i = itr; i <= n; i++)
    {
        if (i % m == 0)
            ans = min(ans, i);
    }

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}