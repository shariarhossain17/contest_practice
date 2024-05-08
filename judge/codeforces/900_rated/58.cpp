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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a <= b)
    {
        cout << b << "\n";
        return;
    }

    if (b >= c)
    {
        cout << -1 << endl;
        return;
    }

    ll rem_min = abs(c - d);
    ll t = b;
    int cnt = ceil(double(a - b) / rem_min);

    cout << t + (cnt * d) + (rem_min * cnt) << "\n";
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