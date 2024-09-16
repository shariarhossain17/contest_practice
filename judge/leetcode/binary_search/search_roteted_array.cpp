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
    int n, t;
    cin >> n >> t;

    vi nums(n);
    array_input_int(nums, 0, n);

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (t == nums[mid])
        {
            cout << "true";
            return;
        }

        if (nums[low] == nums[mid] and nums[high] == nums[mid])
        {
            low++;
            high--;

            continue;
        }

        if (nums[low] <= nums[mid])
        {
            if (t >= nums[low] and nums[mid] >= t)
            {

                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }

        else
        {
            if (nums[high] >= t and t >= nums[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    cout << false << endl;
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