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

    vector<ll> v(n);
    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    ll s = 0;

    if (v[0] == 1)
    {
        s += 1;
    }
    else
    {
        No;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (s >= v[i])
        {
            s += v[i];
        }
        else
        {
            No;
            return;
        }
    }

    Yes;
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