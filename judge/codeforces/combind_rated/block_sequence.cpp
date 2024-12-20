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

int crate_all_possible_case(int n, vector<int> &v, vector<int> &dp, int pos)
{

    if (pos > n)
        return n + 1;
    if (pos == n)
        return 0;

    if (dp[pos] != -1)
        return dp[pos];

    return dp[pos] = min(crate_all_possible_case(n, v, dp, pos + 1) + 1, crate_all_possible_case(n, v, dp, pos + v[pos] + 1));
}
void solve()
{
    int n;
    cin >> n;

    vi v(n);

    array_input_int(v, 0, n);

    vector<int> dp(n, -1);

    cout << crate_all_possible_case(n, v, dp, 0) << endl;
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