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

    vector<int> pos(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
        {
            int k = i - 1;

            while (pos[k] == 0)
            {
                pos[k] = i + 1;
                k--;
            }
        }
    }

    pos[n - 1] = -1;

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (pos[l - 1] <= r && pos[l - 1] != 0)
        {
            cout << l << " " << pos[l - 1] << "\n";
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
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