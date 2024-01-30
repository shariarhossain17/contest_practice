#include <bits/stdc++.h>
using namespace std;

int countBit(int n)
{
    int cnt = 0;

    while (n)
    {
        cnt += (n & 1);
        n >>= 1;
    }

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i <= n; i++)
    {
        int bit = countBit(i);
        v.push_back(bit);
    }

    for (int i : v)
        cout << i << " ";
    return 0;
}