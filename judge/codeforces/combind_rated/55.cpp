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
    int a, b, c, r;
    cin >> a >> b >> c >> r;

    if (a > b)
        swap(a, b);

    int x1 = c - r;
    int x2 = c + r;

    int aa = max(a, x1);
    int bb = min(b, x2);

    int dif = max(bb - aa, 0);

    cout << b - a - dif << endl;
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