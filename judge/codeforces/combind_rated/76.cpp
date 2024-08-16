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
    ll n, k;

    cin >> n >> k;

    vector<long long> v(n);

    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    if (k == 0)
    {
        cout << (v[0] == 1 ? -1 : 1);
        return;
    }
    if (k == n)
        cout << v.back();
    else
    {
        if (v[k] == v[k - 1])
            cout << -1;
        else
            cout << v[k - 1];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}