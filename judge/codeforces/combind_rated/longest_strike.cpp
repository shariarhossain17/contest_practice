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
    int n, k;
    cin >> n >> k;

    vi v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> valid;
    for (auto &x : mp)
    {
        if (x.second >= k)
        {
            valid.push_back(x.first);
        }
    }

    if (valid.empty())
    {
        cout << "-1\n";
        return;
    }

    int l = valid[0], r = valid[0];
    int max_l = l, max_r = l, maxi = 0;

    for (int i = 1; i < valid.size(); i++)
    {
        if (valid[i] == valid[i - 1] + 1)
        {
            r = valid[i];
        }
        else
        {
            if (r - l > maxi)
            {
                maxi = r - l;
                max_l = l;
                max_r = r;
            }
            l = r = valid[i];
        }
    }

    if (r - l > maxi)
    {
        max_l = l;
        max_r = r;
    }

    cout << max_l << " " << max_r << endl;
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
