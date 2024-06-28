#include <stdio.h>

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
    scanf("%d", &n);

    while (n--)
    {
        ll lb, ub, k;
        scanf("%lld %lld %lld", &lb, &ub, &k);

        if (k >= 10)
        {
            printf("0\n");
            continue;
        }

        ll md = 10 / k;
        if (10 % k)
            md++;

        ll hc = perform(md, ub, 1000000007);
        ll lc = perform(md, lb, 1000000007);
        ll vc = (hc - lc + 1000000007) % 1000000007;

        printf("%lld\n", vc);
    }

    return 0;
}
