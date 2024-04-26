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
    int n, a, b;
    cin >> n >> a >> b;
    string ans;
    for (int i = 0; i < b; i++)
        ans += 'a' + i;
    for (int i = b; i < a; i++)
        ans += 'a';
    for (int i = a; i < n; i++)
        ans += ans[i - a];

    cout << ans << endl;
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