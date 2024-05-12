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
    int n, ans;
    cin >> n;
    ans = n * (n + 1) / 2;

    int tmp = 0;

    int k = log2(n);

    for (int i = 0; i <= k; i++)
    {
        tmp += pow(2, i);
    }

    tmp *= 2;

    cout << ans - tmp << endl;
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