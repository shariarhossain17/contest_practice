#include <bits/stdc++.h>
using namespace std;

int setBitCount(int n)
{

    int cnt = 0;
    while (n)
    {
        cnt += n & 1;
        n >>= 1;
    }

    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int cnt = setBitCount(i);

        if (cnt == k)
        {
            sum += v[i];
        }
    }

    cout << sum;

    return 0;
}