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

    vi odd, even;

    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;

        if (x % 2)
            odd.push_back(i + 1);
        else
            even.push_back(i + 1);
    }

    vector<pair<int, int>> ans;

    for (int i = 0; i + 1 < odd.size(); i += 2)
    {
        ans.push_back({odd[i], odd[i + 1]});
    }
    for (int i = 0; i + 1 < even.size(); i += 2)
    {
        ans.push_back({even[i], even[i + 1]});
    }

    for (int i = 0; i < n - 1; i++)
        cout << ans[i].first << " " << ans[i].second << endl;
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