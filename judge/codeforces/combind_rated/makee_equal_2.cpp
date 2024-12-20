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

    vi v(n);
    array_input_int(v, 0, n);

    int i = 0, j = 0;

    while (i < n and v[i] == v[0])
    {
        i++;
    }
    while (j < n and v[n - j - 1] == v[n - 1])
    {
        j++;
    }

    int ans = n;

    if (v[0] == v[n - 1])
    {
        ans -= i;
        ans -= j;
    }
    else
    {
        ans -= max(i, j);
    }

    cout << max(0, ans) << endl;
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