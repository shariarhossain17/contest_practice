#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 2e5 + 5;

vector<int> tree[MAXN];
int minDistance[MAXN];
bool isMarked[MAXN];

void dfs(int v, int parent)
{
    if (isMarked[v])
    {
        minDistance[v] = 0;
    }
    else
    {
        minDistance[v] = MAXN;
    }

    for (int u : tree[v])
    {
        if (u == parent)
            continue;
        dfs(u, v);
        minDistance[v] = min(minDistance[v], minDistance[u] + 1);
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            tree[i].clear();
            isMarked[i] = false;
        }

        for (int i = 1; i <= k; i++)
        {
            int a;
            cin >> a;
            isMarked[a] = true;
        }

        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        dfs(1, 0);

        int answer = MAXN;
        for (int i = 1; i <= n; i++)
        {
            answer = min(answer, minDistance[i]);
        }

        cout << answer << endl;
    }

    return 0;
}
