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

void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);

    int low = 1, high = n - 2;

    if (nums[0] > -1 and nums[0] > nums[1])
    {
        cout << 1;
        return;
    }

    if (nums[n - 1] > -1 and nums[n - 1] > nums[n - 2])
    {
        cout << n;
        return;
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid - 1] and nums[mid] > nums[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (nums[mid] > nums[mid - 1] and nums[mid] < nums[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
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