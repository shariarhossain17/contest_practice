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
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    vector<int> v(1, 0);

    for (auto U : mp)
        v.push_back(U.second);

    sort(v.begin(), v.end());

    vector<int> c = v;

    for (int i = 1; i < c.size(); ++i)
        c[i] += c[i - 1];

    int ans = 1e9;

    for (int i = 1; i < v.size(); i++)
    {
        ans = min(ans, c[i - 1] + c.back() - c[i - 1] - v[i] * ((int)v.size() - i));
    }

    cout << ans << "\n";
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