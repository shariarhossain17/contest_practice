#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int max_coins = 0;

    if (a != b)
    {
        max_coins = max(max_coins, a * 2 - 1);
        max_coins = max(max_coins, a = b * 2 - 1);
    }
    else
    {
        max_coins = max(max_coins, a + b);
    }

    cout << max_coins;

    return 0;
}