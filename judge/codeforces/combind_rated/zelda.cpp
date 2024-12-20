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

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        mp[u]++;
        mp[v]++;
    }

    int cnt = 0;

    for (auto i : mp)
    {
        if (i.second == 1)
            cnt++;
    }

    cout << (cnt + 1) / 2;

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