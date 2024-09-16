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

int start_position(int n, vector<int> &nums, int t)
{
    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= t)
        {

            if (nums[mid] == t)
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

int second_position(int n, vector<int> &nums, int t)
{
    int low = 0;
    int high = n - 1;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == t)
        {

            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] > t)
            high = mid - 1;
        else
            low = mid + 1;
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

    int first = start_position(n, nums, t);
    int second = second_position(n, nums, t);

    vector<int> ans;

    ans.push_back(first);
    ans.push_back(second);

    for (auto i : ans)
        cout << i << " ";
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
