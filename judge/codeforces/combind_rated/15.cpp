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

    if (abs(b - c) % 2 == 0)
        cout << "1 ";
    else
        cout << "0 ";
    if (abs(a - c) % 2 == 0)
        cout << "1 ";
    else
        cout << "0 ";
    if (abs(a - b) % 2 == 0)
        cout << "1 ";
    else
        cout << "0 ";
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