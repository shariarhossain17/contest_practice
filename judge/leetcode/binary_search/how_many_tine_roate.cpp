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

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);
    int l = 0, h = n - 1;

    int idx = -1;
    int ans = INT_MAX;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (nums[l] <= nums[h])
        {
            if (nums[l] < ans)
            {
                idx = l;
                ans = nums[l];
            }

            break;
        }

        if (nums[mid] >= nums[l])
        {

            if (nums[l] < ans)
            {
                idx = l;
                ans = nums[l];
            }

            l = mid + 1;
        }
        else
        {

            h = mid - 1;
            if (nums[mid] < ans)
            {
                idx = mid;
                ans = nums[mid];
            }
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