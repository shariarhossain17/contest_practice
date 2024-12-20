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
#define MOD 1000000007
void solve()
{

    int n;
    cin >> n;
    vi v(n);

    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    ll sum = 1;

    for (int i = 0; i < n; i++)
    {
        sum *= v[i];
        sum %= MOD;
    }

    if (sum > 0)
    {
        cout << 1 << endl;

        cout << 1 << " " << 0 << endl;
    }
    else
        cout << 0 << endl;
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