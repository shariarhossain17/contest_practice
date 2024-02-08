#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int val = v[i];

        for (int j = i + 1; j < n; j++)
        {
            val ^= v[j];
            if (val == 0)
                cnt += (j - i);
        }
    }

    cout << cnt;
    return 0;
}