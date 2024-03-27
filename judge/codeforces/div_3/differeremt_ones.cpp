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
    ll n, m, i, j, k, a;
    cin >> n >> m >> k;
    set<ll> s, s1, s2;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= k)
        {
            s1.insert(a);
        }
    }
    s = s1;
    for (i = 0; i < m; i++)
    {
        cin >> a;
        if (a <= k)
        {
            s.insert(a);
            s2.insert(a);
        }
    }
    if (s.size() < k)
    {
        cout << "NO" << endl;
        return;
    }
    a = 0;
    ll b = 0;
    for (i = 1; i <= k; i++)
    {
        if (s1.find(i) != s1.end() && s2.find(i) == s2.end())
        {
            a++;
        }
        if (s2.find(i) != s2.end() && s1.find(i) == s1.end())
        {
            b++;
        }
    }
    if (max(a, b) > k / 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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