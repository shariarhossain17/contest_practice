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
    sort(v.begin(), v.end());

    if (v[0] != v[1])
        Yes;

    else
    {
        bool f = false;

        for (int i = 1; i < n; i++)
        {
            if (v[i] % v[0] != 0)
                f = true;
        }

        if (f)
            Yes;
        else
            No;
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