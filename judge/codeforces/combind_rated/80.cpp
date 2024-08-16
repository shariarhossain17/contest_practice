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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2)
    {
        int side = abs(y1 - y2);

        cout << (x1 + side) << " " << y1 << " " << x2 + side << " " << y2;
    }
    else if (y1 == y2)
    {

        int side = abs(x1 - x2);

        cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side;
    }

    else if (abs(x1 - x2) == abs(y1 - y2))
    {

        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    else
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}