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

    int case1 = 0, case2 = 0;

    for (int i = 0; i < n - 2; i++)
    {
        case1 ^= i;
        case2 ^= (i + 1);
    }

    ll last = ((ll)1 << 31) - 1;

    if (case1 != 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << i << " ";
        }

        case1 ^= last;
        cout << last << " " << case1;
        newLine;
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            cout << i << " ";
        }

        case2 ^= last;
        cout << last << " " << case2;
        newLine;
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