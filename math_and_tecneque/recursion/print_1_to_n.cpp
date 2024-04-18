#include <bits/stdc++.h>
using namespace std;

void f2(int i, int n)
{
    if (i > n)
        return;

    cout << i << "\n";

    f2(i + 1, n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    f2(1, n);

    return 0;
}