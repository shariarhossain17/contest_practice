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

    ll sum = accumulate(v.begin(), v.end(), 0LL);

    int need = sum / n;

    ll rem = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > need)
        {
            rem += v[i] - need;
            v[i] = need;
        }
        else if (v[i] < need && rem > 0 && rem >= (need - v[i]))
        {
            rem -= (need - v[i]);
            v[i] = need;
        }
    }

    if (all_of(v.begin(), v.end(), [need](ll x)
               { return x == need; }))
        Yes;
    else
        No;
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
