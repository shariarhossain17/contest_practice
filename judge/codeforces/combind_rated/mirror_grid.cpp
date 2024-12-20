#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

int calculate_min_operations(int n, vector<string> &s)
{
    vector<vector<int>> a(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = s[i - 1][j - 1] - '0';
        }
    }

    int ans = 0;
    int span = n - 2;

    for (int layer = 1; layer <= n / 2; layer++, span -= 2)
    {
        for (int i = 0; i <= max(0, span); i++)
        {
            int one = 0, zero = 0;

            one += (a[layer][layer + i] == 1);
            one += (a[layer + i][n - layer + 1] == 1);
            one += (a[n - layer + 1][n - layer + 1 - i] == 1);
            one += (a[n - layer + 1 - i][layer] == 1);

            zero = 4 - one;
            ans += min(4 - one, 4 - zero);
        }
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    array_input_int(s, 0, n);

    cout << calculate_min_operations(n, s) << "\n";
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
