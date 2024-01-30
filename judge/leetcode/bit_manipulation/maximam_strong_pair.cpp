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

    int s = v.size();

    int maxVal = INT_MIN;

    for (int i = 0; i < s; i++)
    {

        for (int j = 0; j < s; j++)
        {
            if (abs(v[i] - v[j]) <= min(v[i], v[j]))
            {

                int x = v[i] ^ v[j];
                if (x > maxVal)
                {
                    maxVal = x;
                }
            }
        }
    }

    cout << maxVal;

    return 0;
}