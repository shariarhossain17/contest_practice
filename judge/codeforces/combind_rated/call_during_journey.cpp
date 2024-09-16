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

    int t0, t1, t2;
    cin >> t0 >> t1 >> t2;

    vector<vector<vector<int>>> g(n);

    while (m--)
    {
        int u, v, l1, l2;
        cin >> u >> v >> l1 >> l2;
        u--;
        v--;

        g[u].push_back({v, l1, l2});
        g[v].push_back({u, l1, l2});
    }

    vector<int> dist(n, -1e9);
    priority_queue<pair<int, int>> pq;

    dist[n - 1] = t0;
    pq.push({t0, n - 1});

    while (!pq.empty())
    {
        auto p = pq.top();
        pq.pop();

        int d = p.first, u = p.second;

        if (d < dist[u])
            continue;
        for (auto e : g[u])
        {
            int v = e[0], l1 = e[1], l2 = e[2];

            int d1 = (d - l1 >= t2 || d <= t1) ? d - l1 : d - l2;
            if (d1 == d - l2)
                d1 = max(d1, t1 - l1);

            if (dist[v] < d1)
            {
                dist[v] = d1;
                pq.push({d1, v});
            }
        }
    }

    cout << (dist[0] >= 0 ? dist[0] : -1) << "\n";
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
