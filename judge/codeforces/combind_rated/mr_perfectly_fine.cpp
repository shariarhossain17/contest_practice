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
    int n, m;
    cin >> n;

    int l1 = INT_MAX, l2 = INT_MAX, both = INT_MAX;

    while (n--)
    {

        cin >> m;

        string s;
        cin >> s;

        if (s[0] == '1' and s[1] == '1')
            both = min(both, m);

        else if (s[0] == '1')
            l1 = min(m, l1);
        else if (s[1] == '1')
            l2 = min(m, l2);
    }

    if (l1 == INT_MAX or l2 == INT_MAX)
    {
        if (both == INT_MAX)
            cout << "-1\n";
        else
            cout << both << "\n";
    }
    else
    {
        cout << min(both, l1 + l2) << "\n";
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