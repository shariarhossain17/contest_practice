#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int binary;

    while (n > 0)
    {

        n = n / 2;
        cout << n % 2;
    }

    return 0;
}