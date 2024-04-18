#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;

    f(i + 1, n);

    cout << i << endl;
}
void f2(int n)
{
    if (n < 1)
        return;

    f2(n - 1);

    cout << n << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    f2(n);
    return 0;
}