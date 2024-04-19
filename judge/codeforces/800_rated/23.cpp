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
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    if (n == 0)
    {
        No;
        return;
    }

    vector<int> v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;

    sort(v.begin(), v.end());

    int s = a + b + c + n;

    if (s % 3 == 0 && (s / 3) >= v[2])
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