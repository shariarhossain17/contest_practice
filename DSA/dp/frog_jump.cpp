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

int frog_jump(vector<int> &nums, int n, vector<int> &dp)
{
    if (n == 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];

    int left = frog_jump(nums, n - 1, dp) + abs(nums[n] - nums[n - 1]);

    int right = INT_MAX;
    if (n > 1)
        right = frog_jump(nums, n - 2, dp) + abs(nums[n] - nums[n - 2]);

    return dp[n] = min(left, right);
}

void solve()
{
    int n;
    cin >> n;
    vi nums(n);
    array_input_int(nums, 0, n);

    vector<int> dp(n + 1, -1);

    // int ans = frog_jump(nums, n - 1, dp);

    // cout << ans << endl;

    dp[0] = 0;

    int prev = 0;
    int prev2 = 0;
    int cur = 0;
    for (int i = 1; i < n; i++)
    {
        //     int left = dp[i - 1] + (abs(nums[i - 1] - nums[i]));
        int left = prev + (abs(nums[i - 1] - nums[i]));

        int right = INT_MAX;
        if (i > 1)
            right = prev2 + abs(nums[i] - nums[i - 2]);

        cur = min(left, right);
        prev2 = prev;
        prev = cur;
    }

    cout << prev << endl;
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