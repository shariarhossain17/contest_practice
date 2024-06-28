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
    int n, m, a, b;

    cin >> n >> m >> a >> b;

    int c = n * a;
    if (n >= m)
    {
        int p = 0;

        while (n > m)
        {
            n -= m;
            p += b;
        }

        int tmp = min(n * a, b);
        p += tmp;

        cout << min(c, p) << endl;
    }
    else
    {
        int t = n / m;
        int rem = n - t * m;
        int result = min(rem * a, b);

        int s = min(n * a, (t * b) + result);
        int final = min(n * a, s);

        cout
            << min(final, b);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}