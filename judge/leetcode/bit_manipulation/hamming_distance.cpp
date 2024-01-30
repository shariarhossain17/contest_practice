#include <bits/stdc++.h>
using namespace std;

int setBit(int n)
{
    int cnt = 0;

    while (n)
    {
        cnt += (n & 1);
        n >>= 1;
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int result = setBit(a ^ b);
    cout << result;

    return 0;
}