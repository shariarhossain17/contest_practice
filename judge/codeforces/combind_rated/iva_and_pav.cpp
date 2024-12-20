#include <bits/stdc++.h>
using namespace std;

int tree[600000]; // Segment tree
int ar[300005];   // Input array

// Function to build the segment tree
void value_insert(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = ar[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    value_insert(Left, b, mid);
    value_insert(Right, mid + 1, e);
    tree[node] = (tree[Left] & tree[Right]);
}

// Function to query the segment tree for AND in range [i, j]
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 2147483647;
    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return p1 & p2;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
            cin >> ar[i];

        int q;
        cin >> q;
        vector<int> v;

        value_insert(1, 1, n);

        while (q--)
        {
            int l, k;
            cin >> l >> k;

            int low = l, high = n;
            int ans = -1;

            while (low <= high)
            {
                int mid = (low + high) / 2;
                int x = query(1, 1, n, l, mid);

                if (x >= k)
                {
                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }

            v.push_back(ans);
        }

        for (auto u : v)
            cout << u << " ";

        cout << endl;
    }

    return 0;
}
