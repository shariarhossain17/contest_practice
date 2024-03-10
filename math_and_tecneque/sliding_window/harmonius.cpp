#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = 0, r = 1, ans = 0;

    while (r < v.size())
    {

        int dif = v[r] - v[l];
        if (dif == 1)
        {
            ans = max(ans, r - l + 1);
        }

        if (dif <= 1)
        {
            r++;
        }
        else
        {
            l++;
        }
    }

    cout << ans;

    return 0;
}