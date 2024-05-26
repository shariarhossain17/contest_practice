#include <bits/stdc++.h>
using namespace std;

void numOfDivisor(int n)
{

    int total = 1;
    for (int i = 2; i * i < n; i++)
    {
        int e = 0;
        do
        {
            e++;
            n /= i;

        } while (n % i == 0);

        total *= (e + 1);
    }

    if (n > 1)
        total *= 2;

    cout << total << endl;
}

void gcd(int a, int b)
{
    if (b == 0)
    {
        cout << a;
        return;
    }

    gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 60;

    numOfDivisor(n);

    gcd(30, 20);

    return 0;
}