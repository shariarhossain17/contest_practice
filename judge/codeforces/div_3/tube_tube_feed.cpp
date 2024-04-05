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
    int n, t;
    cin >> n >> t;

    vi a(n), b(n);

    array_input_int(a, 0, n);
    array_input_int(b, 0, n);

    int max = 0, idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] + i <= t)
        {
            if (max < b[i])
            {
                max = b[i];
                idx = i;
            }
        }
    }

    if (idx == -1)
        cout << -1 << "\n";
    else
        cout << idx + 1 << endl;
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