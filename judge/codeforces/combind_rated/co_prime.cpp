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
vector<int> pairs[1001];
void solve()
{
    int n;
    cin >> n;
    vector<int> id[1001];
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        id[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= 1000; ++i)
    {
        for (int j : pairs[i])
        {
            if (!id[i].empty() && !id[j].empty())
            {
                ans = max(ans, id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 1000; ++i)
    {
        for (int j = 1; j <= 1000; ++j)
        {
            if (__gcd(i, j) == 1)
            {
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
