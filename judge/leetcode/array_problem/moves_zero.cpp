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

void optimal_solution()
{
    int n;
    cin >> n;
    vi nums(n);
    array_input_int(nums, 0, n);

    int i = 0;

    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    for (int i : nums)
        cout << i << " ";
}
void solve()
{
    int n;
    cin >> n;
    vi nums(n);
    array_input_int(nums, 0, n);
    int cnt = 0;

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            cnt++;
        else
            ans.push_back(nums[i]);
    }

    for (int i = 0; i < cnt; i++)
        ans.push_back(0);

    nums = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    optimal_solution();

    return 0;
}