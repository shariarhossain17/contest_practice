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

    vector<ll> pre1(n + 1, 0);
    vector<ll> pre2(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pre1[i] = v[i - 1] + pre1[i - 1];
    }

    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        pre2[i] = v[i - 1] + pre2[i - 1];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int t, l, r;
        cin >> t >> l >> r;

        if (t == 1)
        {
            cout << pre1[r] - pre1[l - 1] << "\n";
        }
        else
        {
            cout << pre2[r] - pre2[l - 1] << "\n";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}