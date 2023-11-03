#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 1;

    int cnt = 0;
    while (x * 2 < 1000)
    {
        cnt++;

        x = x * 2;
    }

    cout << cnt;

    return 0;
}