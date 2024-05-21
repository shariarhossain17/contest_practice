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
    int b;
    cin >> b;
    string t;
    cin >> t;
    string r = t;
    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    unordered_map<char, char> sym_map;
    int n = r.size();
    for (int i = 0; i < n; ++i)
    {
        sym_map[r[i]] = r[n - 1 - i];
    }

    string s = t;
    for (int i = 0; i < t.size(); ++i)
    {
        s[i] = sym_map[t[i]];
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