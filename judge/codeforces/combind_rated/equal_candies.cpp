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

bool isSame(vector<int> &v, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (v[0] != v[i])
            return false;
    }

    return true;
}
void solve()
{
    int n;
    cin >> n;

    vi nums(n);

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

        mn = min(nums[i], mn);
    }

    if (isSame(nums, n) || n == 1)
    {
        cout << 0;
        newLine;
        return;
    }

    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        nums[i] -= mn;

        s += nums[i];
    }

    cout << s << endl;
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