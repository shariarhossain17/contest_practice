#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // if you use and(&) operation in  even number  by 1 answer will be 0 and if you use and(&) operation in odd number by 1 answer will be 1\
    example:

    int n;
    cin >> n;

    if (n & 1 == 0)
    {
        cout << n << " "
             << "is even number";
    }

    else
        cout << n << " "
             << "is odd number";
    return 0;
}