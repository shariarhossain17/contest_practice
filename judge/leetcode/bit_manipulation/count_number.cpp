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

    int max_or = 0;

    for (int i : v)
    {
        max_or |= i;
    }

    int result = 0;

    for (int i = 0; i < (1 << n); i++)
    {

        int p = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {

                p |= v[j];
            }
        }
        if (p == max_or)
            result++;
    }

    cout << result;

    return 0;
}
