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

ll make_w(int n, vector<ll> &v, ll d, ll c)
{

    ll s = 0;
    for (int i = 0; i < n; i++)
    {

        s += ((d * 2) + v[i]) * ((d * 2) + v[i]);

        if (s > c)
            return s;
    }
    return s;
}

void solve()
{
    ll n, c;
    cin >> n >> c;

    vector<ll> v(n);
    array_input_int(v, 0, n);

    ll low = 1, high = 1e9, result = -1;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll w = make_w(n, v, mid, c);

        if (w == c)
        {
            result = mid;
            break;
        }
        else if (w > c)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (result != -1)
        cout << result << endl;
    else
        cout << -1 << endl;
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
