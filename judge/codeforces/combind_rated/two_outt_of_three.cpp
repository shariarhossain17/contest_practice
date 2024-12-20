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

void solve()
{

    int n;
    cin >> n;

    vi nums(n);

    array_input_int(nums, 0, n);

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int cnt = 0;

    for (auto i : mp)
    {
        if (i.second >= 2)
            cnt++;
    }

    if (cnt < 2)
        cout << "-1\n";

    else
    {
        vi ans(n);

        vector<bool> visited(n, false);

        bool first = true;

        int initial_val = 2;

        for (int i = 0; i < n; i++)
        {

            if (visited[i])
            {
                continue;
            }

            bool ok = false;

            visited[i] = true;
            ans[i] = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    visited[j] = true;
                    ans[j] = initial_val;
                    ok = true;
                }
            }

            if (ok)
            {
                initial_val = 3;
            }
        }

        for (auto i : ans)
            cout << i << " ";

        newLine;
    }
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