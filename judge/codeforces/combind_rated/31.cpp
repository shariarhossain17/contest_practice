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

    vector<int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.rbegin(), v.rend());

    int ans = 0;

    if (v[0] > 0)
    {
        v[0]--;
        ans++;
    }
    if (v[1] > 0)
    {
        v[1]--;
        ans++;
    }
    if (v[2] > 0)
    {
        v[2]--;
        ans++;
    }

    if (v[0] > 0 and v[1] > 0)
    {
        v[0]--;
        v[1]--;
        ans++;
    }
    if (v[0] > 0 and v[2] > 0)
    {
        v[0]--;
        v[2]--;
        ans++;
    }
    if (v[1] > 0 and v[2] > 0)
    {
        v[1]--;
        v[2]--;
        ans++;
    }
    if (v[1] > 0 and v[2] > 0 and v[0] > 0)
    {
        ans++;
    }

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