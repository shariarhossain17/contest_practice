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
    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    array_input_int(v, 0, n);

    vector<ll> pref;
    pref.push_back(0);

    vector<ll> prefix;

    for (int i = 0; i < n; i++)
    {
        pref.push_back(pref.back() + v[i]); // Create prefix sum array
        if (i == 0)
            prefix.push_back(v[i]);
        else
        {
            prefix.push_back(max(v[i], prefix.back()));
        }
    }

    while (q--)
    {
        int k;
        cin >> k;

        int idx = upper_bound(prefix.begin(), prefix.end(), k) - prefix.begin();

        cout << pref[idx] << " ";
    }
    newLine;
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
