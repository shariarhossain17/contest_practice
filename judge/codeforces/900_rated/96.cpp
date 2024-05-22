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
    int n, k;
    cin >> n >> k;
    vi v(n);
    array_input_int(v, 0, n);

    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << "\n";
        return;
    }

    int order = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == order + 1)
            order++;
    }

    int unOrder = abs(n - order);

    cout << (unOrder + k - 1) / k << "\n";
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