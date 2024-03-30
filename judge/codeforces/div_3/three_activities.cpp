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
    vi a(n), b(n), c(n);
    vector<pair<ll, ll>> va, vb, vc;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        va.push_back({a[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];

        vb.push_back({b[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];

        vc.push_back({c[i], i});
    }

    sort(va.begin(), va.end(), greater<>());
    sort(vb.begin(), vb.end(), greater<>());
    sort(vc.begin(), vc.end(), greater<>());

    ll s = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++) // Corrected loop condition
            {
                if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
                {
                    s = max(s, va[i].first + vb[j].first + vc[k].first);
                }
            }
        }
    }
    cout << s << endl;
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