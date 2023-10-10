#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            for (int c = 1; c <= n; c++)
            {
                int gcd1 = gcd(a, b);
                int result = gcd(gcd1, c);

                sum += result;
            }
        }
    }

    cout << sum;

    return 0;
}
