#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <iomanip>
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

    int n, m;
    cin >> n >> m;

    vi firs(n), second(m);

    array_input_int(firs, 0, n);
    array_input_int(second, 0, m);

    vi v;
    v.insert(v.end(), firs.begin(), firs.end());
    v.insert(v.end(), second.begin(), second.end());

    sort(v.begin(), v.end());

    int size = n + m;
    cout << fixed << setprecision(4);
    if (size % 2 == 0)
    {

        long double ans = (v[size / 2 - 1] + v[size / 2]) / 2.0;
        cout << ans << endl;
    }
    else
    {

        cout << (double)v[size / 2] << endl;
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