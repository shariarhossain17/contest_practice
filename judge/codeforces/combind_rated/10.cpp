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
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    bool f = true;
    while (k--)
    {
        int x1, y1;
        cin >> x1 >> y1;
        if ((abs(x - x1) + abs(y - y1)) % 2 == 0)
        {
            f = false;
        }
    }

    if (f)
        Yes;
    else
        No;
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
