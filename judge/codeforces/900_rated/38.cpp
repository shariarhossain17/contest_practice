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

    int mx = INT_MAX;
    while (n--)
    {
        int r, t;
        cin >> r >> t;

        if (t % 2 == 0)
        {

            mx = min(mx, (r + (t - 2) / 2));
        }
        else
            mx = min(mx, (r + (t / 2)));
    }

    cout << mx;
    newLine;
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