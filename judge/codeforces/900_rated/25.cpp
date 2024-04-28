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
    int x;
    cin >> x;

    if (x > 45)
        cout << -1 << endl;
    else
    {
        string ans;

        for (int i = 9; i >= 1; i--)
        {
            if (x - i >= 0)
            {
                x -= i;
                ans += (i + 48);
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
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