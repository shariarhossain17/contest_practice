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

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    vector<int> marked(m + 2, 0);

    for (auto val : v)
    {
        int start = val.first;

        int end = val.second;

        marked[start] += 1;
        marked[end + 1] += -1;
    }

    vector<int> prefix_intersection(m + 1, 0);

    int mx = INT_MIN;
    int mini = INT_MAX;

    for (int i = 1; i <= m; i++)
    {
        prefix_intersection[i] = prefix_intersection[i - 1] + marked[i];

        mx = max(prefix_intersection[i], mx);
        mini = min(prefix_intersection[i], mini);
    }
    for (int i = 1; i <= m; i++)
    {
        cout << i << " " << prefix_intersection[i] << "\n";
    }

    cout << mx - mini << endl;
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
