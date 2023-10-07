#include <bits/stdc++.h>
using namespace std;

int solve(long long int num)
{
    long long int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}
int main()
{
    string n;
    cin >> n;

    long long digit_sum = 0;

    for (char c : n)
    {
        digit_sum += (c - '0');
    }

    long long int cnt = 0;
    while (digit_sum >= 10)
    {
        cnt++;
        digit_sum = solve(digit_sum);
    }

    if (n.length() == 1)
        cout << 0;
    else
        cout << cnt + 1;
    return 0;
}