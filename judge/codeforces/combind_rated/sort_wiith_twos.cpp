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

    vector<int> a(n);
    for (auto &e : a)
        cin >> e;

    int f = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            if (i != 1 && i != 2 && i != 4 && i != 8 && i != 16)
                f = 0;
        }
    }

    if (f)
        cout << "Yes\n";
    else
        cout << "No\n";
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
