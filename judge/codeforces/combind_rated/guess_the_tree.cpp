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

ll query(int par, int i)
{
    cout << "? " << par << " " << i << endl;
    cout.flush();
    ll ask;
    cin >> ask;
    return ask;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> v;
    for (int i = 2; i <= n; i++)
    {
        int par = 1;
        while (1)
        {
            int gave = query(par, i);
            if (par == gave)
                break;
            par = gave;
        }

        v.push_back({par, i});
    }

    cout << "! ";
    for (auto i : v)
        cout << i.first << " " << i.second << " ";

    newLine;
    cout.flush();
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
