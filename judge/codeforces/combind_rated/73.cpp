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

    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }

    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        s += i;
    }

    // cout << (n - 1) + 1 << endl;

    int tmp = (n - 1) + 1;

    if (s % tmp == 0)
        cout << -1;
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " " << i - 1 << " ";
        }
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