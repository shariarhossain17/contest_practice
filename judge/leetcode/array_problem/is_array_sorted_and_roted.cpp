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

void solve(vector<int> &nums, int n)
{
    bool sorted = true;

    int cnt = 0;

    if (nums[0] < nums[nums.size() - 1])
        cnt++;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
            cnt++;

        if (cnt > 1)
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
        Yes;
    else
        No;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);
    solve(v, n);

    return 0;
}
