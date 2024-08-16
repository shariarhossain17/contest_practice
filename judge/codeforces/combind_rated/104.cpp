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

    if (n == 2)
    {
        cout << -1 << "\n";
        return;
    }

    int cnt = 0;

    for (int i = 1; i <= n * n; i += 2)
    {

        cout << i << " ";
        cnt++;

        if (cnt == n)
        {
            cout << "\n";
            cnt = 0;
        }
    }
    for (int i = 2; i <= n * n; i += 2)
    {
        cout << i << " ";
        cnt++;

        if (cnt == n)
        {
            cout << "\n";
            cnt = 0;
        }
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