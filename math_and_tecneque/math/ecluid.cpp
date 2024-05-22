#include <bits/stdc++.h>
using namespace std;

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
    int a, b;
    cin >> a >> b;

    gcd(a, b);
    return 0;
}