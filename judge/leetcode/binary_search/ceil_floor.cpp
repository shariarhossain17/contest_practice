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

int find_ceil(int n, vector<int> &nums, int t)
{
    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= t)
        {
            ans = nums[mid];

            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }

    return ans;
}

int find_floor(int n, vector<int> &nums, int t)
{
    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] <= t)
        {
            ans = nums[mid];
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
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

    sort(nums.begin(), nums.end());

    int ceil = find_ceil(n, nums, t);
    int floor = find_floor(n, nums, t);

    cout << floor << " " << ceil << endl;
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
