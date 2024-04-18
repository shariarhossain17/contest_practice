#include <bits/stdc++.h>
using namespace std;

void f2(int i, int n)
{
    if (i < 1)
        return;
    cout << i << "\n";
    f2(i - 1, n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    f2(3, n);
    return 0;
}