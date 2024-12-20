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

    ll op = 0;

    for (int i = n - 1; i > 0; i--)
    {

        if (v[i - 1] > v[i])
        {
            ll r = (v[i - 1] - 1) / v[i];

            op += r;
            v[i - 1] = v[i - 1] / (r + 1);
        }
    }

    cout << op << endl;
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