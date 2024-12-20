#include <bits/stdc++.h>
using namespace std;
#include <iostream>
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

    cout << "hello";

    int n, m;
    cin >> n >> m;

    vi firs(n), second(m);

    array_input_int(firs, 0, n);
    array_input_int(second, 0, m);

    vi v(n + m);

    v.insert(firs.end(), second.begin(), second.end());

    sort(v.begin(), v.end());

    if (n + m % 2 == 0)
    {
        long double ans = v[n + m / 2] + v[(n + m / 2) + 1] / 2;

        cout << ans << endl;
    }
    else
    {
        cout << (double)v[n + m / 2];
    }

    cout << "hello";
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