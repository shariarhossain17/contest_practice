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
    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--)
    {
        ll p;
        cin >> p;

        auto idx = upper_bound(v.begin(), v.end(), p) - v.begin();

        cout << idx << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}