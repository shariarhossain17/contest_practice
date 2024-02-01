#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        num ^= nums[i];
    }

    cout << num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}