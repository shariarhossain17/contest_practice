#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;
    while (n > 0)
    {
        int bit = n & 1;

        v.push_back(bit);
        n >>= 1;
    }

    int even = 0, odd = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if ((i & 1) == 0)
        {

            if (v[i] == 1)
                even++;
        }
        else
        {

            if (v[i] == 1)
                odd++;
        }
    }

    vector<int> result;
    result.push_back(even);
    result.push_back(odd)

        return 0;
}