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
    int n, m;
    cin >> n >> m;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            int dif = 0;

            for (int k = 0; k < m; k++)
            {
                dif += abs(v[i][k] - v[j][k]);
            }

            ans = min(dif, ans);
        }
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
