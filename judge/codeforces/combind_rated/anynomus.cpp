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

    vi v(n);

    array_input_int(v, 0, n);

    int last = n - 1;

    bool f = true;

    for (int i = 0; i < min(n, k); i++)
    {
        if (v[last] > n)
        {
            f = false;
            break;
        }

        last = (last + (n - v[last])) % n;
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