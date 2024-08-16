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

    int p = 0;
    int ans[3];

    for (int i = 2; i * i < n and p < 2; i++)
    {
        if (n % i == 0)
        {
            ans[p++] = i;
            n /= i;
        }
    }

    if (p != 2)
    {
        No;
    }
    else
    {
        Yes;
        cout << ans[0] << " " << ans[1] << " " << n;
        newLine;
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