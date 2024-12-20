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

int make_days(int n, int m, int k, int mid, vector<int> &nums)
{
    int t = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] <= mid)
        {
            cnt++;
        }

        else
            cnt = 0;

        if (k == cnt)
        {
            t++;
            cnt = 0;
        }

        // cout << cnt << endl;
    }

    return t;
}
void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    vi nums(n);

    array_input_int(nums, 0, n);

    if (m * k > n)
    {
        cout << -1;
        return;
    }

    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int bouqets = make_days(n, m, k, mid, nums);

        if (bouqets >= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
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