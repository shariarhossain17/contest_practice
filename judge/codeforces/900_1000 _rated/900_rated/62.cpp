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

    string s;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            s += '1';
        }
    }
    else
    {
        s += '7';
        n -= 3;
        for (int i = 1; i <= n / 2; i++)
        {
            s += '1';
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