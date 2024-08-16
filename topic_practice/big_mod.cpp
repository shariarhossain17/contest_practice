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

int mod_recursion(int n, int b, int mod)
{
    if (b == 0)
        return 1;

    if (b % 2 == 1)
    {
        return (n % mod * mod_recursion(n, b - 1, mod)) % mod;
    }
    else
    {
        int x = mod_recursion(n % mod, b / 2, mod) % mod;
        return (x * x) % mod;
    }
}

void solve()
{

    int n, b, mod;
    cin >> n >> b >> mod;

    cout << mod_recursion(n, b, mod);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}