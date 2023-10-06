#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<>());

        bool flag = false;
        int result;
        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] == v[i + 1] && v[i] == v[i + 2])
            {
                result = v[i];
                flag = true;
                break;
            }
        }
        if (flag)
            cout << result << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}