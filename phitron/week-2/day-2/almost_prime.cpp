#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int prime_divisors = 0;

        for (int j = 2; j <= n; j++)
        {
            if (i % j == 0 && is_prime(j))
            {
                prime_divisors++;
                if (prime_divisors > 2)
                {
                    break;
                }
            }
        }

        if (prime_divisors == 2)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}
