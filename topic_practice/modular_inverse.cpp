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

int big_mod(int a, int b, int c)
{
    if (b == 0)
        return 1;

    if (b % 2 == 1)
    {
        int ans = a * big_mod(a, b - 1, c) % c;
        return ans;
    }
    else
    {
        int x = big_mod(a, b / 2, c) % c;
        return x * x % c;
    }
}

void solve()
{
    int a, b, mod;
    cin >> a >> b >> mod;

    int inverse = big_mod(b, mod - 2, mod);
    cout << (1LL * a % mod) * (inverse % mod) % mod << "\n";
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
