#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if ((n & 1) == 1)
        return 0;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());

    bool flag = true;

    for (int i = 0, j = 1; i < n - 1; i += 2, j += 2)
    {

        if (nums[i] != nums[j])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "yes";
    else
        cout << "no";
    return 0;
}