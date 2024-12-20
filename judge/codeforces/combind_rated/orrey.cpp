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

    vector<bool> vis(n, false);

    int cur = 0;

    for (int i = 0; i < min(31, n); i++)
    {

        int mx = 0, idx = -1;
        for (int j = 0; j < n; j++)
        {
            if (vis[j])
                continue;

            if ((cur | v[j]) > mx)
            {
                mx = (cur | v[j]);
                idx = j;
            }
        }
        vis[idx] = true;

        cout << v[idx] << " ";

        cur |= v[idx];
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            cout << v[i] << " ";
    }

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