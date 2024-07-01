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

ll power(ll base, int exp)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(k);

    array_input_int(v, 0, k);

    reverse(v.begin(), v.end());

    ll s = v[0];

    for (int i = k - 1; i >= 1; i--)
    {
        s += power(n, i) * v[i];
    }

    if (s % 2)
        cout << "odd";
    else
        cout << "even";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
