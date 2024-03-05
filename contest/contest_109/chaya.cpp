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
    int n, x, y, z;
    cin >> n;

    vector<int> v(n);

    array_input_int(v, 0, n);

    x = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] > x)
        {
            x = v[i];
        }

        else
        {
            int tmp = v[i];
            int j = 2;
            while (tmp <= x)
            {
                tmp = v[i] * j;
                j++;
                x = tmp;
            }
        }
    }

    cout << x;
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