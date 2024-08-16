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
    vi a(n);

    array_input_int(a, 0, n);

    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0] and a[i] != 0)
            cnt++;
    }

    if (cnt == n)
    {
        No;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (a[i + 1] < 0)
        {
            No;
            return;
        }
        if (a[i] > 0)
        {
            a[i + 1] = a[i + 1] - a[i];
            a[i] = 0;
        }
    }
    if (a[n - 1] != 0)
    {
        No;
        return;
    }

    Yes;
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