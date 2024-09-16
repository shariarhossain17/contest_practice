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
    cin >> n >> m;

    string s;

    cin >> s;

    vi v;

    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        if (mp.find(x) != mp.end())
            continue;
        else
        {
            v.push_back(x);
            mp[x] = x;
        }
    }

    sort(v.begin(), v.end());

    string q;
    cin >> q;

    sort(q.begin(), q.end());

    for (int i = 0; i < v.size(); i++)
    {
        s[v[i] - 1] = q[i];
    }
    cout << s << endl;
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
