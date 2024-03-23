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

    vi r;

    r.push_back(v[0]);

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            r.push_back(v[i]);
        }
        else
        {
            r.push_back(v[i]);
            r.push_back(v[i]);
        }
    }
    cout << r.size();
    newLine;
    for (auto i : r)
    {
        cout << i << " ";
    }
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