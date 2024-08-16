#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int minDigit(int x)
{
    int min_d = 9;
    while (x > 0)
    {
        min_d = min(min_d, x % 10);
        x /= 10;
    }
    return min_d;
}

int maxDigit(int x)
{
    int max_d = 0;
    while (x > 0)
    {
        max_d = max(max_d, x % 10);
        x /= 10;
    }
    return max_d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, k;
        scanf("%lld %lld", &a, &k);
        k--;
        while (k > 0)
        {
            ll m = a;
            int x = 10;
            int y = 0;
            while (m > 0)
            {
                int d = m % 10;
                m /= 10;
                x = min(x, d);
                y = max(y, d);
            }
            if (x == 0)
                break;
            a += x * y;
            k--;
        }
        printf("%lld\n", a);
    }
    return 0;
}
