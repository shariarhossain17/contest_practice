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

int maxi(vector<int> &nums)
{
    int previous = nums[0];
    int previous2 = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int take = nums[i] + (i > 1 ? previous2 : 0);

        int non_take = 0 + previous;

        int cur = max(take, non_take);

        previous2 = previous;
        previous = cur;
    }

    return previous;
}
void solve()
{
    int n;
    cin >> n;
    vi nums(n);
    array_input_int(nums, 0, n);
    vector<int> tmp, tmp2;

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            tmp.push_back(nums[i]);
        if (i != n - 1)
            tmp2.push_back(nums[i]);
    }

    cout << max(maxi(tmp), maxi(tmp2));
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