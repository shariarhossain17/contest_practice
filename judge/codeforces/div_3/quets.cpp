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
    int n, k;
    cin >> n >> k;

    vi a(n), b(n), c(n);

    array_input_int(a, 0, n);

    array_input_int(b, 0, n);

    c[0] = b[0];

    for (int i = 1; i < n; i++)
    {
        c[i] = (max(c[i - 1], b[i]));
    }

    int s = 0, tmp = 0;

    for (int i = 0; i < min(n, k); i++)
    {
        tmp += a[i];
        int r = k - (i + 1);
        int p = tmp + r * c[i];

        s = max(s, p);
    }
    cout << s << endl;
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