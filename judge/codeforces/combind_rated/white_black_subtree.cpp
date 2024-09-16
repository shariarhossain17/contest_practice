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

const int N = 1e5 + 7;

vector<int> adj[N];
vector<bool> visited(N);
vector<int> blackCount(N);
vector<int> whiteCount(N);
int balancedSubtreeCount = 0;

void dfs(int src, const string &s)
{
    visited[src] = true;
    blackCount[src] = (s[src - 1] == 'B') ? 1 : 0;
    whiteCount[src] = (s[src - 1] == 'W') ? 1 : 0;

    for (int neighbor : adj[src])
    {

        if (!visited[neighbor])
        {
            dfs(neighbor, s);

            blackCount[src] += blackCount[neighbor];
            whiteCount[src] += whiteCount[neighbor];
        }
    }

    if (blackCount[src] == whiteCount[src])
    {
        balancedSubtreeCount++;
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }

    string s;
    cin >> s;

    fill(visited.begin(), visited.begin() + n + 1, false);
    fill(blackCount.begin(), blackCount.begin() + n + 1, 0);
    fill(whiteCount.begin(), whiteCount.begin() + n + 1, 0);
    balancedSubtreeCount = 0;

    dfs(1, s);

    cout << balancedSubtreeCount << "\n";
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

        for (int i = 0; i < N; i++)
            adj[i].clear();
    }

    return 0;
}
