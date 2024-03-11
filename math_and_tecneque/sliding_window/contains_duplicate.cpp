#include <bits/stdc++.h>
using namespace std;

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

    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {

        if (mp.count(v[i]))
        {
            if (abs(i - mp[v[i]]) <= k)
            {
                cout << "got it";
                break;
            }
        }

        mp[v[i]] = i;
    }

    return 0;
}
