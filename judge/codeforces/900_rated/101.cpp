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

    ll n;
    cin >> n;

    vector<ll> v(n), v1(n);

    ll s1 = 0, s2 = 0;

    array_input_int(v, 0, n);
    array_input_int(v1, 0, n);

    for (int i = 0; i < n; i++)
    {
        s1 += v[i];
        s2 += v1[i];
    }

    sort(v1.begin(), v1.end());
    sort(v.begin(), v.end());

    if (s2 > s1)
    {
        cout << min(v[0] * n + s2, v1[0] * n + s1);
        newLine;
    }
    else
    {
        cout << min(v[0] * n + s2, v1[0] * n + s1);
        newLine;
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