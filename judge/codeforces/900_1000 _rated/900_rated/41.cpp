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
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << " " << 0;
        newLine;
        return;
    }

    int x = max(a, b);
    int y = min(a, b);

    int z = x / y;
    int w = x - y;

    if (a == 1 || b == 1)
    {
        cout << w << " " << 0 << endl;
    }
    else
    {
        cout << w << " " << z << endl;
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