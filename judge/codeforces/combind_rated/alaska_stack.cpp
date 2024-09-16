#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define newLine cout << "\n"
#define pb push_back
#define vl vector<ll>
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

    for (int i = 0; i < n; i++)
        cout << i * 2 + 1 << " ";
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
