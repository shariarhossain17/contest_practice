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

    if (is_sorted(v.begin(), v.end()))
    {
        cout << "0\n";
    }
    else
    {
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            int tmp = abs(v[i] - (i + 1));

            if (tmp % k)
                c++;
        }

        if (c > 2)
            cout << "-1\n";
        else if (c == 2)
            cout << "1\n";
        else
            cout << "0\n";
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