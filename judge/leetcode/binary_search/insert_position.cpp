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

int insert_position(int n, vector<int> &nums, int t)
{
    int low = 0;
    int high = n;

    int ans = n;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= t)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}
void solve()
{

    int n, t;
    cin >> n >> t;

    vi nums(n);
    array_input_int(nums, 0, n);

    // cout << insert_position(n, nums, t);

    // short cart

    auto idx = lower_bound(nums.begin(), nums.end(), t);
    auto idx2 = upper_bound(nums.begin(), nums.end(), t);

    cout << idx - nums.begin() << " ";
    cout << idx2 - nums.begin() << " ";
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