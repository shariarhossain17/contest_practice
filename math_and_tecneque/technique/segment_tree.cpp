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

int node[1000];
void build_segment_tree(vector<int> &nums, int idx, int low, int high)
{
    if (low == high)
    {
        node[idx] = nums[low];
        return;
    }

    int mid = low + (high - low) / 2;

    build_segment_tree(nums, 2 * idx + 1, low, mid);
    build_segment_tree(nums, 2 * idx + 2, mid + 1, high);

    node[idx] = max(node[nums, 2 * idx + 1], node[nums, 2 * idx + 2]);
}
void solve()
{

    int n;
    cin >> n;

    vi nums(n);

    array_input_int(nums, 0, n);

    int low = 0;
    int high = n - 1;

    build_segment_tree(nums, 0, low, high);
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