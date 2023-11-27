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
    char c;
    cin >> c;

    string s;
    cin >> s;
    s = '#' + s;

    bool d = true;

    for (int i = 1; i <= n; i++)
        if (s[i] != c)
            d = false;

    if (d)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        bool f = true;

        for (int j = i; j <= n; j += i)
        {
            if (s[j] != c)
            {
                f = false;
                break;
            }
        }

        if (f)
        {
            cout << 1 << "\n"
                 << i << "\n";
            return;
        }
    }

    cout << 2 << "\n"
         << n << " " << n - 1 << "\n";
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