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
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int s = 0;

        for (int j = 0; j < x; j++)
        {
            int m;
            cin >> m;
            s += m * 5;
        }

        ans = min(ans, s + (x * 15));
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
