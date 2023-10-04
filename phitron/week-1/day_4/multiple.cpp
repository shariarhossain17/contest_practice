#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;

    int cnt = 1;

    while (x * 2 <= y)
    {
        x = x * 2;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}