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

const int N = 1e9 + 7;

void solve()
{
    int n, h;
    cin >> n >> h;

    vector<ll> nums(n);
    array_input_int(nums, 0, n);

    int low = 1, high = *max_element(nums.begin(), nums.end());
    int ans = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long totalHours = 0;

        for (int pile : nums)
        {
            totalHours += (pile + mid - 1) / mid;
        }

        if (totalHours <= h)
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