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

    if (n == 1)
        cout << k << "\n";
    else if (k % n == 0)
        cout << k / n << "\n";
    else
    {
        if (n < k)
        {
            cout << k / n + 1 << "\n";
        }
        else
        {
            if (n % k == 0)
                cout << "1\n";
            else
                cout << "2\n";
        }
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