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
    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    vector<ll> result;

    for (int i = 0; i < n; i++)
    {
        auto itr = s.lower_bound(i + 1);

        if (itr == s.end() or *itr != (i + 1))
        {
            result.push_back(i + 1);
        }
        else
        {
            s.erase(itr);
        }
    }

    int ans = 0;

    for (int i : result)
    {
        auto itr = s.upper_bound(i * 2);

        if (itr == s.end())
        {
            cout << -1 << '\n';
            return;
        }
        ans++;
        s.erase(itr);
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