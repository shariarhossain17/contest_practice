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

    map<int, char> mp;

    string s;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) == mp.end())
        {
            s += 'a';
            mp[v[i]] = 'a';
        }
        else
        {

            char unique = mp[v[i]] + 1;
            s += unique;
            mp[v[i]] = unique;
        }
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