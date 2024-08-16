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
    int n, m;
    cin >> n >> m;

    vector<int> ar(n, 0);

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        ar[x - 1]++;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        ans = min(ans, ar[i]);
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
