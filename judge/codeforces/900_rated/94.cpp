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

    reverse(v.begin(), v.end());

    while (!v.empty() and v.back() == 0)
        v.pop_back();

    if (v.empty())
    {
        cout << 0 << endl;
        return;
    }

    reverse(v.begin(), v.end());

    ll ans = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == 0)
            ans++;
        else
            ans += v[i];
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