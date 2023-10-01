#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = ((a + c - 1) / c) * c;

    if (d <= b)
        cout << d;
    else
        cout << -1;
    return 0;
}