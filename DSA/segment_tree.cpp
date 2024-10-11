#include <bits/stdc++.h>
using namespace std;
#include <iostream>

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

int ar[100005];
int node[4 * 100005];

void build_segment_tree(int idx, int low, int high)
{
    // base case
    if (low == high)
    {
        node[idx] = ar[low];
        return;
    }
    // divide space of node
    int mid = low + (high - low) / 2;
    // run left node
    build_segment_tree(2 * idx + 1, low, mid);
    // right side node
    build_segment_tree(2 * idx + 2, mid + 1, high);
    // store max value
    node[idx] = max(node[2 * idx + 1], node[2 * idx + 2]);
}

int query(int idx, int low, int high, int l, int r)
{

    // complete lies
    if (low >= l and high <= r)
    {
        return node[idx];
    }

    if (low > r or high < l)
        return INT_MIN;

    int mid = low + (high - low) / 2;

    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);

    return max(left, right);
}

void solve()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> ar[i];
    build_segment_tree(0, 0, n - 1);

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << query(0, 0, n - 1, l, r) << endl;
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