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

bool insert_cow(vector<int> &nums, int c, int d)
{

    int cnt = 1, cur = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - cur >= d)
        {
            cnt++;
            cur = nums[i];
        }
    }

    return (cnt >= c ? true : false);
}
void solve()
{
    int n, c;
    cin >> n >> c;

    vi nums(n);

    array_input_int(nums, 0, n);

    sort(nums.begin(), nums.end());

    int low = 1, high = nums[n - 1];

    int d = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (insert_cow(nums, c, mid))
        {

            d = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << d << endl;
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