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

    int ans = 0, val = -1;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == k)
        {
            val = v[i];
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if ((v[i] >= val))
            ans++;
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}