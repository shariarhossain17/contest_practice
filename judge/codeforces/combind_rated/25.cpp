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

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    array_input_int(v, 0, n);

    int num = v[0];

    for (int i = 0; i < n; i++)
    {
        num = gcd(num, v[i]);
    }

    cout << v[n - 1] / num << "\n";
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
