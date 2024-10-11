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
    int n, days;
    cin >> n >> days;

    vi nums(n);

    array_input_int(nums, 0, n);

    int low = *max_element(nums.begin(), nums.end());

    int high = accumulate(nums.begin(), nums.end(), 0);

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int d1 = count_day(nums, mid);

        if (d1 <= days)
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
