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

const int N = 1e5 + 5;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> insert(N);
vector<int> low(N);
int t = 1;
vector<pair<int, int>> bridges;

void dfs(int u, int parent)
{
    visited[u] = true;
    insert[u] = low[u] = t;
    t++;

    for (int v : g[u])
    {
        if (v == parent)
            continue;

        if (!visited[v])
        {
            dfs(v, u);
            low[u] = min(low[u], low[v]);

            if (low[v] > insert[u])
            {
                bridges.push_back({u, v});
            }
        }
        else
        {
            low[u] = min(low[u], insert[v]);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        visited[i] = false;
        insert[i] = 0;
        low[i] = 0;
    }

    t = 1;
    bridges.clear();

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, -1);
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
