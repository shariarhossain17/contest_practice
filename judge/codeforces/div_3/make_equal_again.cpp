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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 1, r = n;
    while (l <= n && a[l] == a[1])
        l++;
    while (r >= 1 && a[r] == a[n])
        r--;
    if (a[1] == a[n])
    {
        cout << max(0, r - l + 1) << '\n';
    }
    else
    {
        cout << min(n - l + 1, r) << '\n';
    }
    return;
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