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
    vector<int> v(n);
    array_input_int(v, 0, n);

    vector<int> diff(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        diff[i] = abs(v[i] - v[i + 1]);
    }

    int result = INT_MAX;

    if (n >= 2)
        result = min(result, diff[0]);

    if (n >= 2)
        result = min(result, diff[n - 2]);

    for (int i = 0; i < n - 2; i++)
    {
        int max_dif = max(diff[i - 1], diff[i]);
        result = min(result, max_dif);
    }

    cout << result << "\n";
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