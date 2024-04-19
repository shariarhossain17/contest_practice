#include <bits/stdc++.h>
using namespace std;

int f(int n, int s)
{
    if (n < 1)
        return s;

    f(n - 1, s + n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int result = f(n, 0);

    cout << result;

    return 0;
}