#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}