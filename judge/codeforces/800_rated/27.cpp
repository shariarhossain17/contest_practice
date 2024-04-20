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

    int even = 0, odd = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i % 2 == 0)
            even++;
        if (x % 2 == 0)
            even--;
        if (i % 2 == 1)
            odd++;
        if (x % 2 == 1)
            odd--;

        if (i % 2 != x % 2)
            ans++;
    }

    if (even > 0 || odd > 0)
        cout << -1;
    else
        cout << ans / 2;
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