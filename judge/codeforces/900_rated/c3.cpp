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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool flag1 = false;
    bool flag2 = false;

    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for (int i = a; i <= b; i++)
    {
        if (c == i)
            flag1 = true;
        if (d == i)
            flag2 = true;
    }
    if ((flag1 and flag2) or (!flag1 and !flag2))
    {
        No;
    }
    else
    {
        Yes;
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