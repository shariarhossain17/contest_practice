#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;

    return n * f(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int result = f(n);

    cout << result;
    return 0;
}