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

    int a, b, c;
    cin >> a >> b >> c;

    if ((2 * b - a) > 0 and (2 * b - a) % c == 0)
        Yes;
    else if ((2 * b - c) > 0 and (2 * b - c) % a == 0)
        Yes;
    else if ((a + c) % (2 * b) == 0)
        Yes;
    else
        No;
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