#include <bits/stdc++.h>
using namespace std;

int setBitCount(int num)
{
    int cnt = 0;

    while (num)
    {
        cnt += num & 1;
        num >>= 1;
    }

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, g;

    cin >> s >> g;

    int num = s ^ g;

    int result = setBitCount(num);

    cout << result;
    return 0;
}