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

void divisor(map<int, int> &mp, int val)
{
    int x = 2;

    while (x * x <= val)
    {
        while (val % x == 0)
        {
            mp[x]++;
            val /= x;
        }

        x++;
    }
    if (val > 1)
        mp[val]++;
}
void solve()
{
    int n;
    cin >> n;

    vi nums(n);
    array_input_int(nums, 0, n);

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        divisor(mp, nums[i]);
    }

    for (auto i : mp)
    {

        if (i.second % n != 0)
        {
            No;
            return;
        }
    }

    Yes;
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
