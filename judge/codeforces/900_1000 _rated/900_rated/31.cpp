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
    int n, q;
    cin >> n >> q;

    vector<long long> v(n + 1, 0), v2(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        v2[i] = v2[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int sum = v2[n];

        sum -= v2[r] - v2[l - 1];

        sum += ((r - l + 1) * k);

        if (sum % 2 == 1)
            Yes;
        else
            No;
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