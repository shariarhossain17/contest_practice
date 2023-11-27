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
    int ar[n + 3];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    for (int i = 1; i <= n; i++)
    {
        int ind = 0;
        for (int j = 2; j <= i + 1; j++)
        {
            if (ar[i] % j != 0)
            {
                ind = 1;
                break;
            }
        }
        if (ind == 0)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
