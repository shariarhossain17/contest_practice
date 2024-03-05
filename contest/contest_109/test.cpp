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

    vector<int> v(n);

    array_input_int(v, 0, n);

    ll ans = 0;
    set<ll> st;

    for (int i = 0; i < n; i++)
    {
        ll a = 1;
        ll b = v[i];

        while (a <= b)
        {
            if (v[i] > ans && st.find(v[i]) == st.end())
            {
                break;
            }
            v[i] = a * b;
            a++;
        }

        ans = v[i];
        st.insert(v[i]);
    }
    cout << v[n - 1];
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
