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
    int n, q;
    cin >> n >> q;

    vi v(n), v2(q), v3;

    array_input_int(v, 0, n);
    array_input_int(v2, 0, q);

    map<int, int> mp;

    for (int i = 0; i < q; i++)
    {

        if (mp.find(v2[i]) == mp.end())
        {
            mp[v2[i]] = v2[i];
            v3.push_back(v2[i]);
        }
    }

    for (int i = 0; i < v3.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] % (1 << v3[i]) == 0)
            {
                v[j] += (1 << (v3[i] - 1));
            }
        }
    }

    for (auto i : v)
        cout << i << " ";
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
