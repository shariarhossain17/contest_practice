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

    map<int, int> mp, first, last;

    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
        {
            mp[v[i]]++;
            first[v[i]] = i;
            last[v[i]] = i;
        }
        else
        {
            last[v[i]] = i;
        }
    }

    ll ans = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (first[v[i]] == i)
            sum++;
        if (last[v[i]] == i)
            ans += sum;
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
