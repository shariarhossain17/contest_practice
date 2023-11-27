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
    int n, k;
    cin >> n >> k;
    vector<int> ne, po;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            po.push_back(x);
        if (x < 0)
            ne.push_back(-x);
    }
    ll ans = 0;

    sort(po.begin(), po.end());
    sort(ne.begin(), ne.end());
    reverse(po.begin(), po.end());
    reverse(ne.begin(), ne.end());

    if (ne.size() == 0)
    {
        if (po.size() != 0)
        {
            for (int i = 0; i < po.size(); i += k)
            {
                // cout<<po[i]<<endl;
                ans += po[i] * 2;
            }
            ans -= po[0];
        }
        cout << ans << endl;
    }
    else if (po.size() == 0)
    {
        if (ne.size() != 0)
        {
            for (int i = 0; i < ne.size(); i += k)
            {
                ans += ne[i] * 2;
            }
            ans -= ne[0];
        }
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < po.size(); i += k)
            ans += po[i] * 2;
        for (int i = 0; i < ne.size(); i += k)
            ans += ne[i] * 2;
        if (po[0] >= ne[0])
            ans -= po[0];
        else
            ans -= ne[0];
        cout << ans << endl;
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