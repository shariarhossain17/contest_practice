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
    vi v(n);
    array_input_int(v, 0, n);

    int cnt = 0;
    int pvt = v[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] > pvt)
        {
            pvt = v[i];
            cnt++;
        }
    }

    cout << cnt << endl;
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