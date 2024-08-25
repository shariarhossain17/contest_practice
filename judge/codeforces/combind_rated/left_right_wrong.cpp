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

    string s;
    cin >> s;

    vector<ll> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    ll ans = 0;

    int i = 0, j = n - 1;

    while (i < j)
    {

        if (s[i] == 'L' and s[j] == 'R')
        {
            ans += prefix[j + 1] - prefix[i];
            i++;
            j--;
        }
        else if (s[i] == 'L')
            j--;
        else
            i++;
    }

    cout << ans << endl;
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
