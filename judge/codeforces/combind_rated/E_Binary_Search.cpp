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

    int n, x;
    cin >> n >> x;

    vi v(n + 1);
    array_input_int(v, 1, n + 1);

    int l = 1, r = n + 1;

    while (r - l != 1)
    {
        int mid = (l + r) / 2;

        if (v[mid] > x)
            r = mid;
        else
            l = mid;
    }

    int idx = -1;

    for (int i = 1; i != n + 1; i++)
    {
        if (x == v[i])
        {
            idx = i;
        }
    }

    cout << 1 << endl
         << l << " " << idx << endl;
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