#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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
    int n, m;
    cin >> n >> m;

    int low = 0;
    int high = m;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (pow(mid, n) == m)
        {
            ans = mid;
            break;
        }

        else if (pow(mid, n) > m)
            high = mid - 1;
        else
            low = mid + 1;
    }

    cout << ans << endl;
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