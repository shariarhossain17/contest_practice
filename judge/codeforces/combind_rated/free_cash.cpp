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
    ll n;
    cin >> n;

    int ans = INT_MIN;

    map<pair<int, int>, int> st;
    vector<pair<int, int>> times(n);

    for (int i = 0; i < n; ++i)
    {
        int h, m;
        cin >> h >> m;

        st[{h, m}]++;

        ans = max(ans, st[{h, m}]);
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
