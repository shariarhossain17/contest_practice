#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int count = 0;

        for (int val : nums)
        {

            if (val & (1 << i))
                count++;
        }
        if (count >= k)
        {
            ans |= (1 << i);
        }
    }

    cout << ans;

    return 0;
}