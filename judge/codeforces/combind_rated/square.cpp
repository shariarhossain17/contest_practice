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

    int max_x = INT_MIN, max_y = INT_MIN, mn_x = INT_MAX, mn_y = INT_MAX;

    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;

        max_x = max(max_x, a);
        max_y = max(max_y, b);
        mn_x = min(mn_x, a);
        mn_y = min(mn_y, b);
    }

    cout << (max_x - mn_x) * (max_y - mn_y) << endl;
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