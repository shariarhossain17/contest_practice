#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int x, n, d;
    cin >> x >> n;

    switch (n % 4)
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = -n;
        break;
    case 2:
        d = 1;
        break;
    case 3:
        d = n + 1;
        break;
    }

    if (x % 2 == 0)
        cout << x + d;
    else
        cout << x - d;
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
