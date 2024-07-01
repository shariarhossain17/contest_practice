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

    vector<int> v(n, 0);

    map<int, int> mp;

    set<int> s;

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        v[x]++;
        s.insert(x);

        mp[v[i]]++;
    }

    int t = s.size();

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, min(v[i], t - 1));
        ans = max(ans, min(v[i] - 1, t));
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