#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        vector<int> v;

        for (int i = 0; i < 4; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int taimor = v[0];

        int cnt = 0;
        for (int i = 1; i < 4; i++)
        {
            if (taimor < v[i])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}