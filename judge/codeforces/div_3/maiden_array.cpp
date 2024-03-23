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

    ll n, ans = 0;
    cin >> n;

    vi v(n + 1);

    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    int i = (n + 1) / 2;

    while (i <= n)
    {
        if (v[i] == v[(n + 1) / 2])
            ans++;
        else
            break;
        i++;
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