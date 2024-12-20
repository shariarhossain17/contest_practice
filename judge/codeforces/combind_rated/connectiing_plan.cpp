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
    int n, c;
    cin >> n >> c;

    vi v(n);

    array_input_int(v, 0, n);

    vector<ll> prefix(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + v[i];
    }

    int cur = 1;

    for (int i = 2; i <= n; i++)
    {

        if (prefix[cur] + v[i - 1] >= i * c)
        {
            cur = i;
        }
        cout << cur << endl;
    }

    if (cur == n)
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