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
    int n, m, k, H;
    cin >> n >> m >> k >> H;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ar[i] = abs(H - a);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        bool ok = false;
        for (int x = 1; x <= m; x++)
        {
            for (int y = x + 1; y <= m; y++)
            {
                if (x == y)
                    continue;
                int hDif = abs(x - y) * k;
                if (hDif == ar[i])
                    ok = true;
            }
        }

        if (ok)
            ans += 1;
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