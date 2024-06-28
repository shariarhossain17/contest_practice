#include <iostream>

#define ll long long

ll perform(ll x, ll y, ll z)
{
    ll res = 1;
    x %= z;
    if (x == 0)
        return 0;

    for (; y > 0; y >>= 1, x = (x * x) % z)
        if (y & 1)
            res = (res * x) % z;

    return res;
}

int main()
{
    int n;
    std::cin >> n;

    while (n--)
    {
        ll lb, ub, k;
        std::cin >> lb >> ub >> k;

        if (k >= 10)
        {
            std::cout << 0 << std::endl;
            continue;
        }

        ll md = 10 / k;
        if (10 % k)
            md++;

        ll hc = perform(md, ub, 1000000007);
        ll lc = perform(md, lb, 1000000007);
        ll vc = (hc - lc + 1000000007) % 1000000007;

        std::cout << vc << std::endl;
    }

    return 0;
}
