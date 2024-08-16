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
    ll l, r;
    cin >> l >> r;

    ll evenL = (l % 2 == 0) ? l : l + 1;
    ll oddL = (l % 2 != 0) ? l : l + 1;

    ll evenR = (r % 2 == 0) ? r : r - 1;
    ll oddR = (r % 2 != 0) ? r : r - 1;

    ll evenCount = (evenR - evenL) / 2 + 1;
    ll oddCount = (oddR - oddL) / 2 + 1;

    ll even_sum = (evenCount * (evenL + evenR)) / 2;
    ll odd_sum = (oddCount * (oddL + oddR)) / 2;

    ll ans = even_sum - odd_sum;

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
