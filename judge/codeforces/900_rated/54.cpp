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
    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] - v[i + 1] > 0)
        {
            swap(v[i], v[i + 1]);
            cnt++;
        }
    }

    if (n % 2 == 1)
        cout << cnt - 1;
    else
        cout << cnt;

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