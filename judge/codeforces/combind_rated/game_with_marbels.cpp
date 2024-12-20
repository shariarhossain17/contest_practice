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
    vi a(n), b(n);

    array_input_int(a, 0, n);
    array_input_int(b, 0, n);

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(a[i] + b[i], i));
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[v[i].second] -= 1;
            b[v[i].second] = 0;
        }
        else
        {
            a[v[i].second] = 0;
            b[v[i].second] -= 1;
        }
    }

    ll sa = 0, sb = 0;

    for (ll i = 0; i < n; i++)
    {
        sa += a[i];
        sb += b[i];
    }

    cout << sa - sb << endl;
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
