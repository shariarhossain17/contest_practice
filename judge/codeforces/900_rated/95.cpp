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
    vi v(n), v1(n);
    array_input_int(v, 0, n);
    array_input_int(v1, 0, n);

    vi temp1 = v, temp2 = v1;

    sort(temp1.begin(), temp1.end());

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = v1[i];
    }

    for (int i = 0; i < n; i++)
        cout << temp1[i] << " ";

    newLine;

    for (int i = 0; i < n; i++)
    {
        cout << mp[temp1[i]] << " ";
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