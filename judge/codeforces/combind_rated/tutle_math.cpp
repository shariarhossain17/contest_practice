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

    vi v(n);
    array_input_int(v, 0, n);

    ll sum = 0;

    map<int, int> mp;

    bool f = false;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];

        if (v[i] % 3 == 1)
            f = true;
    }

    int op = 0;

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    else if (sum % 3 == 2)
        cout << 1 << endl;
    else
    {
        if (f)
            cout << 1 << endl;
        else
            cout << 2 << endl;
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