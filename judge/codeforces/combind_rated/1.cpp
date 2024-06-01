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
int n, a[5];
void solve()
{
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x, a[x]++;

    int res = a[4] + a[3];
    a[1] = max(0, a[1] - a[3]);
    int s = 2 * a[2] + a[1];
    res += s / 4 + (s % 4 > 0);
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}