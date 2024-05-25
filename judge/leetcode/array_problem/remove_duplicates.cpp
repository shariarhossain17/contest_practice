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

void solve(vector<int> &nums)
{

    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[j] != nums[i])
        {
            nums[j + 1] = nums[i];
            j++;
        }
    }

    for (int i : nums)
        cout << i << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);
    solve(v);

    return 0;
}
