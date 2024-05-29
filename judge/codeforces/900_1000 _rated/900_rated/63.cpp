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

    int max_dif = 1;

    int cnt = 1;

    for (int i = 1; i < n - 1; i++)
    {
        if (v[n - 1] == v[i])
            max_dif++;
        if (v[0] == v[i])
            cnt++;
    }

    if (v[0] == v[n - 1])
    {

        int ans = n * (n - 1);
        cout << ans;
        newLine;
    }
    else
    {
        int ans = 2 * (cnt * max_dif);
        cout << ans;
        newLine;
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