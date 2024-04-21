#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return f(n - 1) + f(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << f(5);
    return 0;
}